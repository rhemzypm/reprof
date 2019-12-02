#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
//nama:R.Bintang Bagus Putra Angkasa 19/442484/PA/19233

//menyatakan tipe-tipe data
	int jumlahtiket;
	double total;
	double price1, price2, price3, price4;
	int terjual1, terjual2, terjual3, terjual4;
	int kategori1, kategori2, kategori3, kategori4;
	
//membaca file yang dipakai
	ifstream infile;

	infile.open("tickets.txt");
	
	infile >> price1;
	infile >> terjual1;
	infile >> price2;
	infile >> terjual2;
	infile >> price3;
	infile >> terjual3;
	infile >> price4;
	infile >> terjual4;
	
//menghitung jumlah tiket yang terjual
	jumlahtiket	= terjual1+terjual2+terjual3+terjual4;
	
//menghintung total pendapatan
	kategori1	= price1*terjual1;
	kategori2	= price2*terjual2;
	kategori3	= price3*terjual3;
	kategori4	= price4*terjual4;
	total		= kategori1+kategori2+kategori3+kategori4;
	
//memunculkan hasil di layar
	cout<<"jumlah tiket yang terjual = "<< jumlahtiket << " buah"<< endl;
	cout<<"total pendapatan yang didapat = "<< fixed << setprecision(2) << total << " dollar" << endl;

	cin.get();
	return 0;
}
