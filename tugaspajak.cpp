#include <iostream>
#include <iomanip>

using namespace std;

int main (){

float uangawal, uangbunga, uangakhirpajak;


cout<<"input nominal uang = Rp";
cin >> uangawal;

uangbunga = uangawal + uangawal*5/12/100;



if(uangbunga<50000000){
uangakhirpajak = uangbunga - uangbunga*5/100;
cout << "uangakhir = Rp" << fixed<<setprecision(2)<< uangakhirpajak;
}else if((uangbunga>=50000000) && (uangbunga<=250000000)){
uangakhirpajak = uangbunga - uangbunga*10/100;
cout << "uangakhir = Rp" << fixed<<setprecision(2)<< uangakhirpajak;
}else{
uangakhirpajak = uangbunga - uangbunga*15/100;
cout << "uangakhir = Rp" << fixed<<setprecision(2)<< uangakhirpajak;
}



return 0;
}
