# stacking and spitting 

import numpy as np
# arr1 = np.array([1,2,3])
# arr2 = np.array([4,5,6])

# new_arr = np.vstack((arr1 , arr2))
# print(new_arr)
# new_arr1 = np.hstack((arr1 , arr2))
# print(new_arr1)

# splitting
array = np.array([[1,2,3],
                 [4,5,6],
                 [7,8,9]])
print(np.split(array,3))
print(np.hsplit(array,3))
print(np.vsplit(array,3))
