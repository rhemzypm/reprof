#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double ta, t, persenv, v;
	int c;
		
	cout<<"masukan waktu dalam sekon"<<endl;
	cin>>t;
	
	cout<<"masukan kecepatan dalam persen cahaya nol koma sekian"<<endl;
	cin>>persenv;
	
	
	c = 300000000;
	v = persenv*c;

	ta = t / sqrt(1-pow((v/c),2));
	cout<<"hasilnya adalah..."<<ta;
	}
	
	
