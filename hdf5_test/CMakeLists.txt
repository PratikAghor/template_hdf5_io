cmake_minimum_required (VERSION 3.9)

# define a project name
project(hdf5_io)

# define empty list of libraries to link
set(PROJECT_LIBS "")



# find HDF5
find_package(HDF5 COMPONENTS CXX REQUIRED)
include_directories(${HDF5_INCLUDE_DIRS})
set(PROJECT_LIBS ${HDF5_LIBS} ${HDF5_LIBRARIES})


# link libraries
add_executable(write_hdf5 write_hdf5.cpp)
target_link_libraries(write_hdf5 ${PROJECT_LIBS})

add_executable(read_hdf5 read_hdf5.cpp)
target_link_libraries(read_hdf5 ${PROJECT_LIBS})

add_executable(write_append_vect_hdf5 write_append_vect_hdf5.cpp)
target_link_libraries(write_append_vect_hdf5 ${PROJECT_LIBS})

add_executable(read_append_vect_hdf5 read_append_vect_hdf5.cpp)
target_link_libraries(read_append_vect_hdf5 ${PROJECT_LIBS})
