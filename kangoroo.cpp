#include <iostream>
using namespace std;


int main() {
	
	//deklarasikan variabel variabel yang akan dipakai
    int x1, v1, x2, v2;
    
    //masukan input 
    cin >> x1 >> v1 >> x2 >> v2;
    
    	if(x1==x2 && v1==v2) cout << "YES";	// kalo data kedua benda sama ya berarti iya
    	else if (x1 == x2 && v1 > v2) cout << "NO";	//startnya bareng tapi yang satu lebih kenceng ya ga ketemu
    	else if (x1 <= x2 && v1 <= v2) cout << "NO";	//yang startnya lebih belakang, kalo mau nyelip harus punya kecepatan yang lebih gede dong
   		//mengggunakan persamaan selisih kedua posiss awal yang dimodulo dengan selisih kecepatan,apabila nol, YES lalu break loopnya
	   	//tidak perlu untuk mesimulasikan setiap adegan, dengan persamaan berikut kita dapat menentukan kedua kanguru  bertemu pada kelipatan persekutuan terkecil atau tidak
	    else if(((x2-x1)%(v1-v2))==0){
	        cout<<"YES";
		}else cout << "NO";
    
}
