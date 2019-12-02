#include <iostream>
using namespace std;

int main(){
	
	int a, b, fpb, kpk;
	cin >> a;        //inputkan a
	cin >> b;        //inputkan b

	int hasilkali = a*b;
	int c=a%b;
	while(c!=0){               //menggunakan while loop selama c belum nol
		a=b;               //perulangan menggunakan algo euclid
		b=c;
		c=a%b;
	}	
	

	kpk = hasilkali/b;

	cout << kpk;
}
