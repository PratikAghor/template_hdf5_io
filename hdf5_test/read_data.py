# post processing
import h5py
import numpy as np
#######################################
"""
read data/u0.h5 as a numpy array
"""
#######################################
# read data
filename = "u0"
hf = h5py.File('data/' + filename + '.h5', 'r')
ut = hf.get('u(t)')
u0 = np.array(ut)

print("u0 = \n", u0)
#######################################
filename2 = "rI"
hf = h5py.File('data/' + filename2 + '.h5', 'r')
rI = hf.get('r')
rI = np.array(rI)

print("rI = \n", rI)
#######################################
