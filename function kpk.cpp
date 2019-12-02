#include <iostream>
using namespace std;

//fungsi bernama kpk()untuk menghitung kpk dari dua bilangan

int kpk(int a, int b){
	int hasilkali = a*b;
	int c=a%b;
	while(c!=0){               //menggunakan while loop selama c belum nol
		a=b;               //perulangan menggunakan euclid
		b=c;
		c=a%b;
	}	
	return hasilkali/b;        //b terbaru adalah fpb, 
        //untuk KPK didapat dari hasilkali yang dibagi b terbaru
}

//fungsi utama dibawah

int main(){
	int a, b;
	cin >> a;        //inputkan a
	cin >> b;        //inputkan b

	cout << kpk(a, b);      //menuju ke fungsi kpk kemudian di output
}
