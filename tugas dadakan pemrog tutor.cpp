#include <iostream>
using namespace std;

int main(){
	
	int n, high, low, total, nilai[n], second=0, largest=0;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> nilai[i];
		if(i==0) total = nilai[0];
		else total += nilai[i];
	}
	
	cout << endl << total/n << endl;
	
	for (int i=0; i<n;i++){
		if(i==0) high = nilai[0];
		else if(nilai[i]>=high) high = nilai[i];
		else high=high;
	}for (int i=0; i<n;i++){
		if(i==0) low = nilai[0];
		else if(nilai[i]<=low) low = nilai[i];
		else low=low;
	}
	
	cout << high-low << endl;
	
	for (int i=0; i<n; i++){
		if(nilai[i]>=largest){
			second = largest;
			largest = nilai[i];
		}
		else{
			largest=largest;
			if(nilai[i]>=second) second = nilai[i]; 
		}
	
	}
	
	cout << largest-second;
	
}
