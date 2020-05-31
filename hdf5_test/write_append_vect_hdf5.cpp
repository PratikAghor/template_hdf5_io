#include<iostream>
#include<fstream>
#include<string>
#include "math.h"
#include "headerFiles/matrix2d.h"
#include "headerFiles/vector.h"
//#include "/usr/include/hdf5/serial/H5Cpp.h" // use locate H5Cpp.h to find path
#include "functions/write_vect_hdf5.cpp"

using namespace std;
using namespace H5;
/**********************************************************/
int main() {
	const int Nz=5;
	const int Nr=3;
	const int	 RANK = 2; // for hdf5 DataSet
	const H5std_string FILE_NAME("../data/r.h5");
	const H5std_string DATASET_NAME("u(t)");

	vect<double, 2*Nr+1+4> rI;

	double ra=0.3;
	double ri=ra;	//inner radius
	double L=1.0;	//outer radius
	double Gamma=1.0;	//aspect ratio
	double ro=L;		//outer radius
	double Lz=Gamma*L;	//height

	double dr=(double)(ro-ri)/(double)(Nr);
	double drInverse=(double)1.0/(double)dr;


	/**********************************************************/
	for(int j=2; j<2+2*Nr+1; j++){
		rI(j)=ra+(j-2)*(0.5*dr);
	}
		cout<<rI<<endl;

		string file_name = "../data/rI.h5";
		string dataset_name = "r";

		write_vect_hdf5(rI, file_name, dataset_name);
	/**********************************************************/


	return 0;
}
