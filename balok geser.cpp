#include <iostream>
using namespace std;

int main(){

int n, nilai[n],titip;
cin >> n;

	for(int i=0; i<n; i++){
		cin >> nilai[i];
	}


 	for(int i=0;i<n;i++){ 
	  	for(int j=0;j<n-1;j++) {
	   		if(nilai[j]>nilai[j+1]){
	    		titip = nilai[j];
	    		nilai[j] = nilai[j+1];
	    		nilai[j+1] = titip;
	   		}
	  	}
	}
	
	for(int i=0; i<n; i++){
		cout << nilai[i] << endl;
	}
}

