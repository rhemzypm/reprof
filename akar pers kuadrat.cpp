#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float a, b, c, D, x1, x2; //deklarasi semua variable yang terlibat
	
	cin >> a;		//input a sebagai koefisien dari x^2
	cin >> b;		//input b sebagai koefisien dari x
	cin >> c;		//input c sebagai konstanta
	
	D = sqrt(b*b-4*a*c);	//mencari diskriminan terlebih dahulu sekalian di akar
	
	//karena hasil akar bisa positif bisa juga negatif, maka akan ada dua hasil sebagai berikut
	x1 = (-b+D)/(2*a);		//x1 sbg hasil ketika +D
	x2 = (-b-D)/(2*a);		//x2 sbg hasil ketika -D
	
	cout << x1 << endl;		//outputkan x1 dan x2
	cout << x2;
	
}
