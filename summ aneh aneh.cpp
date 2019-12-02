#include <iostream>
using namespace std;

int main(){
	
	int n,kelA[n],kelB[n],titip,summ;
	
	cin >> n;
	
	for(int i=0;i<n;i++) cin >> kelA[i];
	for(int i=0;i<n;i++) cin >> kelB[i];

	for(int i=0;i<n;i++){	
		for(int j=0;j<n-1;j++) {
			if(kelA[j]>kelA[j+1]){
				titip = kelA[j];
				kelA[j] = kelA[j+1];
				kelA[j+1] = titip;
			}
		}
	}
	
	for(int i=0;i<n;i++){	
		for(int j=0;j<n-1;j++) {
			if(kelB[j]>kelB[j+1]){
				titip = kelB[j];
				kelB[j] = kelB[j+1];
				kelB[j+1] = titip;
			}
		}
	}
	
	for(int i=0;i<n;i++) cout << kelA[i] <<endl;
	for(int i=0;i<n;i++) cout << kelB[i] <<endl;	
	
	
	int kelX[n];
	for(int i=0;i<n;i++) kelX[i]= kelA[i]*kelB[i];
	for(int i=0;i<n;i++) summ += kelX[i];
	
	cout << summ; 
	
	
}
