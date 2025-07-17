'''the game function in program lets a user play a game and returns the sscore as an integer.
you need to read a file'hi-score,txt' whixh is eirther blank or contains the previous hi-score. u need to wap to updte 
the hi-score whenever the game function breaks the hi-score '''
import random

def game():
    print("you are playing tha game")
    score=random.randint(1,62)
    # fetch the file
    with open("hiscore.txt") as f:
        hiscore= f.read()
        if(hiscore!=""):
            hiscore=int(hiscore)
        else:
            hiscore=0

    print(f"YOUR SCORE: {score}")
    if(score>hiscore):
        #wirte the score to the file
        with open("hiscore.txt","w") as f:
            f.write(str(score))
    return score

game()
