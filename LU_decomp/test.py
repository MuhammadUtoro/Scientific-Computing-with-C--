import numpy as np
import scipy

# Define the matrix A
A = scipy.array([ [2, 4, 3, 5], [-4, -7, -5, -8], [6, 8, 2, 9], [4, 9, -2, 14] ])
# A = np.array([
#     [2.0, 4.0, 3.0, 5.0],
#     [-4.0, -7.0, -5.0, -8.0],
#     [6.0, 8.0, 2.0, 9.0],
#     [4.0, 9.0, -2.0, 14.0]
# ], dtype=float)

# Perform LU decomposition
P, L, U = scipy.linalg.lu(A)

print("Matrix L:")
print(L)
print("\nMatrix U:")
print(U)
print("\nMatrix P:")
print(P)
