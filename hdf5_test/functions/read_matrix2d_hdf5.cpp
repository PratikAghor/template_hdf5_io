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
void read_matrix2d_hdf5(matrix2d<T, ny, nx> &f, string file_name, string dataset_name) {

	const int	 RANK = 2; // for hdf5 DataSet
	const H5std_string FILE_NAME(file_name);
	const H5std_string DATASET_NAME(dataset_name);

	/**********************************************************/
	// Create the data space for the dataset.
	H5File file( FILE_NAME, H5F_ACC_RDONLY );
	DataSet uData = file.openDataSet( DATASET_NAME );

	// get # of dims
	DataSpace filespace = uData.getSpace();
	int rank = filespace.getSimpleExtentNdims();
	hsize_t dims[2];    // dataset dimensions
	rank = filespace.getSimpleExtentDims( dims );

	DataSpace dataspace(RANK, dims);
	uData.read( f.mat2, PredType::NATIVE_DOUBLE, dataspace, filespace );

	/**********************************************************/

}
