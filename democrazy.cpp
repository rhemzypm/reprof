#include <iostream>
using namespace std;

int main(){
	int n, m, vote[n], calon[m], dukungan[m], largest, second, titip;
	
	
	cin >> n;
	cin >> m;
	
	
	
	
	for(int i=0; i<n; i++){
		cin >> vote[i];
	}
	
	for(int i=1; i<=m; i++){
		calon[i]=i;
		dukungan[i]=0;
	}
	
	for(int i=0; i<n; i++){
		for(int j=1; j<=m; j++){
			if(vote[i]==calon[j]) dukungan[j]++;
		}
	}
		

	
	
	
	if(dukungan[1]<dukungan[2]){ 
      largest = 2;
      second = 1;
   }
   else{ 
      largest = 1;
      second = 2;
   }
   for (int i = 3; i<= n ; i ++) {

      if (dukungan[i] > largest) {
         second = largest;
         largest = i;
      }

      else if (dukungan[i] > second && dukungan[i] != largest) {
         second = i;
      }
   }
   
   cout << "waspada nomor" << second << endl;
   
    for(int i=0;i<n;i++){ 
	  	for(int j=0;j<n-1;j++) {
	   		if(dukungan[j]>dukungan[j+1]){
	    		titip = dukungan[j];
	    		dukungan[j] = dukungan[j+1];
	    		dukungan[j+1] = titip;
	   		}
	  	}
	}
	
	for(int i=0; i<n; i++){
		cout << dukungan[i] << endl;
	}
	

}
