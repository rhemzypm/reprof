#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    int i,a,b,r,kpk;
    int p;
    int hasilkali, akhir;

kpk=0;

cout<<"1. Menentukan KPK"<<endl;
cout<<"2. Menentukan FPB"<<endl;
cout<<"3. Menentukan KPK metode 2"<<endl;
cout<<"4. EXIT"<<endl;
cout<<"Masukkan pilihan anda : ";
cin>>p;

switch (p)
{
case 1:
cout<<"\nMencari KPK"<<endl;
cout<<"Masukkan Bilangan Pertama : ";
cin>>a;
cout<<"Masukkan Bilangan Kedua : ";
cin>>b;
cout<<endl;

for(i=1;i<=b;i++)
{
kpk=kpk+a;

if(kpk % b==0)
{

cout<<"\nKPK : "<<kpk<<endl;
break;


case 2:
cout<<"\nMencari FPB"<<endl;
cout << "Masukkan Bilangan Pertama : ";
cin >>a;                              
cout << "Masukan Bilangan Kedua : " ;
cin >>b;
r = a%b;                                                    
while (r!=0)
{
a = b;
b = r;
r = a%b;
}
cout<<"\nFPB : "<<b<<endl;
break;

case 3:
	cout<<"\nMencari KPK metodeku wkwk"<<endl;
	cout<<"Masukkan Bilangan Pertama : ";
	cin>>a;
	cout<<"Masukkan Bilangan Kedua : ";
	cin>>b;
	cout<<endl;
	hasilkali = a*b;
	cout<<hasilkali<<endl;
	r = a%b;
	while (r!=0)    
	{
	a = b;
	b = r;
	r = a%b;
	}
	cout<<b<<endl;
	akhir= hasilkali/b;
	cout<<"\nKPK"<<akhir<<endl;
	break;
	
	
	

case 4:
cout<<"EXIT Now !!!"<<endl;
break;

default:
cout<<"Error !!!"<<endl;
}
}

    system("PAUSE");
    return EXIT_SUCCESS; }
} 
