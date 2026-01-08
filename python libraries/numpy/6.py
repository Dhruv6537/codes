# advanced numpy
import numpy as np
# insert
arr = np.array([1,3,5,7,9])
array = np.insert(arr,2,4,)
print(array)
arr1 = np.array([[1,2],[3,4]])
arr2 = np.insert(arr1,1,[5,6],axis=0)
print(arr2)

# append
array = np.array([1,2,3,4])
array1 = np.append(array , [5,6])
print(array1)
 
# concatenate
new_arr = np.array([1,2,3])
new_arr1 = np.array([4,5,6,7])
new_arr2 = np.concatenate((new_arr , new_arr1))
print(new_arr2)

