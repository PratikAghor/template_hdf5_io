#include<iostream>
#include<fstream>
#include<string>
#include "math.h"
#include "../headerFiles/matrix2d.h"
#include "../headerFiles/vector.h"
#include "/usr/include/hdf5/serial/H5Cpp.h" // use locate H5Cpp.h to find path

using namespace std;
using namespace H5;
/**********************************************************/
template<typename T, int ny, int nx>
void write_matrix2d_hdf5(matrix2d<T, ny, nx> &f, string file_name, string dataset_name) {

	const int	 RANK = 2; // for hdf5 DataSet
	const H5std_string FILE_NAME(file_name);
	const H5std_string DATASET_NAME(dataset_name);

	/**********************************************************/
		// Create the data space for the dataset.
		H5File file(FILE_NAME, H5F_ACC_TRUNC);

		hsize_t dims[2] = {ny, nx};
		DataSpace dataspace(RANK, dims);

		// Create the dataset.
		DataSet dataset = file.createDataSet(DATASET_NAME, PredType::NATIVE_DOUBLE,
                                            dataspace);
    // Attempt to write data to HDF5 file
    dataset.write(f.mat2, PredType::NATIVE_DOUBLE);

	/**********************************************************/

}
