# aggregation function 
import numpy as np

arr = np.array([16,36,2,8,4,3,66])
print(np.sum(arr))
print(np.mean(arr))
print(np.min(arr))
print(np.max(arr))
print(np.std(arr))
print(np.var(arr))

arr1 = np.array([[1,2,3],
                 [4,5,6]])

fd = arr1.ravel()
print(fd)
