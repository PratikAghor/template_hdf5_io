## Write-Read vect/matrix2d arrays in hdf5 format 
#### Author - Pratik Aghor

Following points outline the procedure to make the tests and results of the tests obtained

* make a new directory ``` mkdir build```
* change to that directory ```cd build```
* run ```cmake ..```
* To check if tests pass type ```ctest .``` (currently, there are no tests in the test form)
* To generate ```u0.h5``` execute the executable ```./write_hdf5```
* To read the saved ```u0.h5``` in C++ execute the executable ```./read_hdf5```
* To read the saved ```u0.h5``` in python type ```python3 read_data.py```


## For 1d vect arrays:
* To generate ```rI.h5``` execute the executable ```./write_vect_hdf5```
* To read the saved ```rI.h5``` in C++ execute the executable ```./read_vect_hdf5```
* To read the saved ```rI.h5``` in python type ```python3 read_data.py```

## TODO:
* append vect
