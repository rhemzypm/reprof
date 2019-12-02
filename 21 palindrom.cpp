#include <iostream>
using namespace std;

int main(){
	
	string awal, akhir;
	cin >> awal;
	
	int panjang = awal.length();
	
	for(int i=panjang-1; i>=0; i--){
		akhir = akhir + awal[i];
	}
	
	if (awal==akhir) cout << "PALINDROM";
	else cout << "BUKAN PALINDROM";
	return 0;
	
}
