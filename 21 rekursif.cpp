#include <iostream>
#include <math.h>

using namespace std;

int fungsi(int n){
	
	if(n==1) return 1;
	
	else return pow(n,4)+fungsi(n-1);
	
}

int main(){
	int n;
	cout << "Masukan angka = ";
	cin >> n;
	
	cout << fungsi(n);
}
