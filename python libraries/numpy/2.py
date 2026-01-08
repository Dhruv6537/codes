# properties of array 
import numpy as np

arr = np.array([[[1.7,2,3],
                [4,5,6],
                [7,8,9]]])
print(arr.size) #size
print(arr.shape) #shape
print(arr.ndim) #dimension

print(arr.dtype) # to check datatype

array = np.array([1.2 , 2.3 , 4.3])
print(arr.dtype)
int_arr = array.astype(int)

print(int_arr.dtype)
print(int_arr)