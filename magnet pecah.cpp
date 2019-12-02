#include <iostream>
using namespace std;

int main(){
	int n, magnet[n], pecah=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> magnet[i];
	}
	
	for(int i=0; i<n-1; i++){
		if (magnet[i]!=magnet[i+1]) pecah++;
	}
	
	cout << pecah+1;
}
