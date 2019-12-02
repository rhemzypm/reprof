#include <iostream>

#include <fstream>

#include <iomanip>

using namespace std;

int main() {
	int weekly;
	float hourrate;
	int gajiperjam;
	
	//menginput standar gaji per jam dari perusahaan pengguna program
	cout << "STANDAR GAJI PERUSAHAAN (PER JAM) = ";
	cin >> gajiperjam;
	
	//extragaji adalah gaji perjam yang didapat saat melebihi 40 jam kerjanya (1,5 kali dari gajiperjam)
		int extragaji = gajiperjam*3/2;
	
	//deklarasi array
	string nama[10];
	int data[10][3];
	
	//code 1 : membaca dan mengisi data ke array dari file txt
	//code 2 : (sekaligus) menghitung weekly pay
	
	ifstream inputFile;
	inputFile.open("karyawan.txt");
	
	for(int i=0;i<10;i++){
		for(int j=0; j<4; j++){
			if(j==0) inputFile >> nama[i];
			else{
				if(j==1) inputFile >> data[i][j];
				else{
					if(data[i][1]<=40) weekly = data[i][1]*gajiperjam;
					else weekly = (40*gajiperjam)+(data[i][1]-40)*extragaji;
								
					if(j==2) data[i][j] = weekly/data[i][1];
					else data[i][j] = weekly;
				}
			}	
		}
	}
	
	//code 3 : menyebutkan nama nama yang lebih dari sama dengan rata rata weekly pay nya
	//mencari rata-rata terlebih dahulu
	int avg=0;
	for(int i=0;i<10;i++) avg += data[i][3];
	avg=avg/10;
	
	cout << "---------------------------------------------"<<endl<<endl;
	cout << "KARYAWAN DENGAN WEEKLY BANYAK = " << endl;
	for(int i=0;i<10;i++) if(data[i][3]>=avg) cout << nama[i] << ", ";
	cout << endl << endl;
	cout << "---------------------------------------------"<<endl;
	
	
	//code 4 : mengoutput data masing masing karyawan
	cout << setw(10) << "NAMA" << setw(11) << "JAM KERJA" << setw(11) << "PER JAM" << setw(11) << "WEEKLY" << endl;
	cout << "---------------------------------------------"<<endl;
	for(int i=0;i<10;i++){
		for(int j=0; j<4; j++){
			if(j==0) cout << setw(10) << nama[i] << " ";
			else cout << setw(10) << data[i][j] << " ";

		}
		cout << endl;
	}
	cout << "---------------------------------------------"<<endl;
	
	//code untuk menunjukan rata-rata
	cout << endl << "Rata-rata Weekly = "<< avg << endl << endl;
}	
	
	
