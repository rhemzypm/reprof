#include <iostream>
using namespace std;


int fpb(int a, int b){
	int r;
	
	r=a%b;
	while (r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}
int arrFPB(int jarak[], int n) 
{ 
    int result = jarak[0]; 
    for (int i = 1; i < n; i++)  result = fpb(jarak[i], result); 
  
    return result; 
} 
int main(){
	
	int n, pohon[n], titip, jarak[n];

	cin >> n;
	for(int i=0;i<n;i++) cin >> pohon[i];

	for(int i=0;i<n;i++){	
		for(int j=0;j<n-1;j++) {
			if(pohon[j]>pohon[j+1]){
				titip = pohon[j];
				pohon[j] = pohon[j+1];
				pohon[j+1] = titip;
			}
		}
	}
	
	for(int i=0;i<n-1;i++) {
		if(pohon[i]>pohon[i+1])		jarak[i]= pohon[i]-pohon[i+1];
		else if(pohon[i]<pohon[i+1])	jarak[i]= pohon[i+1]-pohon[i];
		else jarak[i]=0;
	}

	cout << arrFPB(jarak, n) << endl;


}
