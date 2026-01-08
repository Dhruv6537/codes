"""
rotating_globe.py

Creates an interactive orthographic globe that rotates (animation)
using Plotly. Saves to rotating_globe.html which you can open in your browser.

Requirements:
    pip install plotly

Run:
    python rotating_globe.py
"""

import math
import plotly.graph_objects as go

# --- Configuration ---
output_file = "rotating_globe.html"
step_deg = 4            # degrees per frame (smaller -> smoother, more frames)
frame_duration = 50     # ms per frame in the animation
initial_lon = 0         # starting central longitude
tilt_deg = 0            # tilt of the globe (rotate around x-axis), change for perspective

# A few example city markers to show motion clearly
cities = [
    {"name": "New York", "lon": -74.0060, "lat": 40.7128},
    {"name": "London",   "lon": -0.1278,  "lat": 51.5074},
    {"name": "Mumbai",   "lon": 72.8777,  "lat": 19.0760},
    {"name": "Tokyo",    "lon": 139.6917, "lat": 35.6895},
]

# --- Base (static) trace: just show the globe with land/coastlines ---
base_trace = go.Scattergeo(
    lon=[c["lon"] for c in cities],
    lat=[c["lat"] for c in cities],
    text=[c["name"] for c in cities],
    mode="markers+text",
    marker=dict(size=6),
    textposition="top center",
    hoverinfo="text"
)

# Optional: add an equator line (as a visual reference)
equator_lons = list(range(-180, 181, 2))
equator_lats = [0] * len(equator_lons)
equator_trace = go.Scattergeo(
    lon=equator_lons,
    lat=equator_lats,
    mode="lines",
    hoverinfo="none",
    line=dict(width=1, dash="dash")
)

# Build layout with orthographic projection.
layout = go.Layout(
    title="Rotating Globe (orthographic projection)",
    showlegend=False,
    geo=dict(
        projection=dict(type="orthographic",
                        rotation=dict(lon=initial_lon, lat=tilt_deg)),
        showcountries=True,
        showland=True,
        landcolor="rgb(230, 230, 230)",
        oceancolor="rgb(200, 230, 255)",
        showocean=True,
        showcoastlines=True,
        coastlinecolor="rgb(100,100,100)",
        lataxis=dict(showgrid=True),
        lonaxis=dict(showgrid=True),
        resolution=50,        # resolution of coastlines (higher -> slower)
    ),
    updatemenus=[{
        "type": "buttons",
        "buttons": [
            {
                "label": "Play",
                "method": "animate",
                "args": [None, {"frame": {"duration": frame_duration, "redraw": True},
                                "fromcurrent": True, "transition": {"duration": 0}}],
            },
            {
                "label": "Pause",
                "method": "animate",
                "args": [[None], {"frame": {"duration": 0, "redraw": False},
                                  "mode": "immediate", "transition": {"duration": 0}}],
            },
        ],
        "x": 0.1,
        "y": 0.05
    }],
    margin=dict(l=0, r=0, t=40, b=0)
)

# Create the figure and frames (rotate longitude)
fig = go.Figure(data=[base_trace, equator_trace], layout=layout)

# Frames: update only the layout rotation.lon for each frame
frame_lons = list(range(initial_lon, initial_lon + 360, step_deg))
frames = []
for lon in frame_lons:
    # Keep lon in [-180, 180] (Plotly accepts all, but nicer)
    norm_lon = ((lon + 180) % 360) - 180
    frame = go.Frame(
        data=[base_trace, equator_trace],
        name=f"rot_{norm_lon}",
        layout=go.Layout(
            geo=dict(
                projection=dict(rotation=dict(lon=norm_lon, lat=tilt_deg))
            )
        )
    )
    frames.append(frame)

fig.frames = frames

# Slider (optional) so users can scrub through rotation
steps = []
for i, lon in enumerate(frame_lons):
    norm_lon = ((lon + 180) % 360) - 180
    step = dict(
        method="animate",
        args=[[f"rot_{norm_lon}"], {"frame": {"duration": 0, "redraw": True},
                                     "mode": "immediate", "transition": {"duration": 0}}],
        label=str(norm_lon)
    )
    steps.append(step)

sliders = [dict(
    active=0,
    steps=steps,
    x=0.12, y=0, len=0.8
)]
fig.update_layout(sliders=sliders)

# Save to HTML
fig.write_html(output_file, auto_open=False)
print(f"Saved rotating globe animation to {output_file}")
print("Open that file in a browser. Click Play to see the globe rotate.")
