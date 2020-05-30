#include<iostream>
#include<fstream>
#include<string>
#include "math.h"
#include "headerFiles/matrix2d.h"
#include "headerFiles/vector.h"
#include "/usr/include/hdf5/serial/H5Cpp.h" // use ```locate H5Cpp.h``` to find path
#include "functions/read_matrix2d_hdf5.cpp"

using namespace std;
using namespace H5;
/**********************************************************/
int main() {
	const int Nz=5;
	const int Nr=3;
	const int	 RANK = 2; // for hdf5 DataSet
	const H5std_string FILE_NAME("../data/u0.h5");
	const H5std_string DATASET_NAME("u(t)");

	matrix2d<double,Nz,Nr+1> u0;
	int u0_col = Nr+1;
	matrix2d<double,Nz,Nr> T0;

	/**********************************************************/
		// read data/u0.h5
		string file_name = "../data/u0.h5";
		string dataset_name = "u(t)";

		read_matrix2d_hdf5(u0, file_name, dataset_name);

	 cout<<u0<<endl;
	/**********************************************************/


	return 0;
}
