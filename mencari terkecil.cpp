#include <iostream>
using namespace std;

int main(){
	
	int n, nilai[n], sel, bilA, bilB;
	
	cin >> n;
	
	for(int i=0;i<n;i++) cin >> nilai[i];
	
	int	minn = 999999999;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			
			if(nilai[i]>nilai[j]) sel = nilai[i]-nilai[j];
			else if(nilai[i]<nilai[j]) sel = nilai[j]-nilai[i];
			else sel=0;
			
			if (sel<minn) {
				bilA = nilai[i];
				bilB = nilai[j];
				minn = sel;
			}
		}
	}
	
	
	cout << minn << " (" << bilA << "dengan" << bilB << ")";
}
