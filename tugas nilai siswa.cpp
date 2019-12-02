#include <iostream>
using namespace std;

int main (){
	
	int i, j, n; // deklarasikan variabel variabel
	
	cin >> n ; // input ada berapa buah nilai
	
	int nilai[n]; // deklarasi array nilai
	
	
	//menggunakan loop for untuk menlakukan pengulangan input sebanyak n kali
	for (i=0; i<n; i++){
		cin >> nilai[i]; // input setiap nilai
		
		if(nilai[i]<38){
			nilai[i] = nilai[i]; // nilai dibawah 38 tidak mendapat pembulatan/ tetap
		}
		else if ((nilai[i]%5)>=3){
			nilai[i] = nilai[i] + (5 - nilai[i]%5); 
			// nilai yang dekat dengan kelipatan 5 diatasnya (berjarak kurang dari 3)
			// nilai tsb ditambahkan dengan (5 - nilai%5) supaya membulat ke atas (kelipatan 5)
		}else{
			nilai[i] = nilai[i];
			//selain dua if diatas, yaitu yang tidak cukup dekat dengan kelipatan 5 diatasnya, nilai tetap
		}
	}
	
	//menggunakan loop for untuk melakukan pengulangan output setiap nilai
	for (j=0; j<n; j++) cout << nilai[j]<< endl;
	
	
	
}
