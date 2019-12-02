#include <iostream>
using namespace std;

int main (){
	int t;			//deklarasi variabel t (int) yang merupakan tinggi
	cin >> t;		//input tinggi
	
	if(t%2!=0){	
	//untuk tinggi ganjil
		for (int i=1; i<=t/2; i++) cout << "* *" << endl; //mengulangi output "* *" sebanyak setengah tinggi h (i<=t/2-1)
		cout << "***" << endl;								//bagian tengah dari h
		for (int i=1; i<=t/2; i++) cout << "* *" << endl; //mengulangi output "* *" sebanyak setengah tinggi h (i<=t/2-1)
	}else{	
	//untuk tinggi genap
		for (int i=1; i<=t/2-1; i++) cout << "* *" << endl; //mengulangi output "* *" sebanyak setengah tinggi h kurang 1 (i<=t/2-1)
		cout << "***" << endl;								//bagian tengah dari h
		cout << "***" << endl;								//bagian tengah dari h
		for (int i=1; i<=t/2-1; i++) cout << "* *" << endl;	//mengulangi output "* *" sebanyak setengah tinggi h kurang 1 (i<=t/2-1)
	}
}
