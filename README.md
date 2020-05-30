## old_hederfiles: 

* contains initial version of my vector and matrix2d classes


## Write-Read matrix2d arrays in hdf5 format 
#### Author - Pratik Aghor
* Prerequisites: cmake min version 3.9, there should be a folder named ```data``` to store test matrix2d, etc.  
* To install hdf5 libraries, use ```  sudo apt-get install libhdf5-serial-dev ``` for ubuntu

* Following points outline the procedure to make the tests and results of the tests obtained:

* make a new directory ``` mkdir build```
* change to that directory ```cd build```
* run ```cmake ..```
* To check if tests pass type ```ctest .``` (currently, there are no tests in the test form)
* To generate ```u0.h5``` execute the executable ```./write_hdf5```
* To read the saved ```u0.h5``` in C++ execute the executable ```./read_hdf5```
* To read the saved ```u0.h5``` in python type ```python3 read_u0.py```



