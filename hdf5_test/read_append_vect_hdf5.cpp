#include<iostream>
#include<fstream>
#include<string>
#include "math.h"
#include "headerFiles/matrix2d.h"
#include "headerFiles/vector.h"
//#include "/usr/include/hdf5/serial/H5Cpp.h" // use locate H5Cpp.h to find path
#include "functions/read_vect_hdf5.cpp"

using namespace std;
using namespace H5;
/**********************************************************/
int main() {
	const int Nz=5;
	const int Nr=3;
	const int	 RANK = 1; // for hdf5 DataSet

	vect<double, 2*Nr+1+4> rI;

	/**********************************************************/
	// read data/rI.h5, should be the same as written/ as printed by ```python3 read_data.py```
	string file_name = "../data/rI.h5";
	string dataset_name = "r";
	read_vect_hdf5(rI, file_name, dataset_name);

	cout<<rI<<endl;
	/**********************************************************/


	return 0;
}
