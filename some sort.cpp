#include<bits/stdc++.h>
using namespace std;

struct x
{
 long long NISN;
 string nama;
 int nilai;
};

x mahasiswa[7];

void print_data()
{
 for(int a=0; a<7; a++)
  cout<<mahasiswa[a].NISN<<' '<<mahasiswa[a].nama<<' '<<mahasiswa[a].nilai<<endl;
  
 cout<<endl<<endl;
}

void sequential_search(int x)
{
 for(int a=0; a<7; a++)
  if(mahasiswa[a].nilai == 60)
   mahasiswa[a].nama = "Joko";
}

int binser(int l, int r, long long x)
{
 int m = (l + r) / 2;
 
 if(mahasiswa[m].NISN == x)
  return m;
 else if(mahasiswa[m].NISN < x)
  l = m + 1;
 else if(mahasiswa[m].NISN > x)
  r = m - 1;
  
 binser(l,r,x);
}

void bubble_sort()
{
 //BERDASARKAN NILAI
 for(int a=0; a<6; a++)
  for(int b=0; b<6-a; b++)
   if(mahasiswa[b].nilai > mahasiswa[b+1].nilai)
    swap(mahasiswa[b], mahasiswa[b+1]);
    
 cout<<"> BUBBLE SORT BERDASARKNA NILAI"<<endl;   
 print_data();
 
 //BERDASARKAN NISN
 for(int a=0; a<6; a++)
  for(int b=0; b<6-a; b++)
   if(mahasiswa[b].NISN > mahasiswa[b+1].NISN)
    swap(mahasiswa[b], mahasiswa[b+1]);
 
 cout<<"> BUBBLE SORT BERDASARKAN NISN"<<endl;
 print_data();
}

void selection_sort()
{
 int min;
 
 //BERDASARKAN NILAI
 for(int a=0; a<6; a++)
 {
  min = a;
  for(int b=a+1; b<7; b++)
   if(mahasiswa[b].nilai < mahasiswa[min].nilai)
    min = b;
    
  swap(mahasiswa[a], mahasiswa[min]);
 }
 
 cout<<"> SELECTION SORT BERDASARKAN NILAI"<<endl;
 print_data();
 
 //BERDASARKAN NISN
 for(int a=0; a<6; a++)
 {
  min = a;
  for(int b=a+1; b<7; b++)
   if(mahasiswa[b].NISN < mahasiswa[min].NISN)
    min = b;
    
  swap(mahasiswa[a], mahasiswa[min]);
 }
 
 cout<<"> SELECTION SORT BERDASARKAN NISN"<<endl;
 print_data();
}

void insertion_sort()
{
 int x;
 
 //BERDASARKAN NILAI
 for(int a=1; a<7; a++)
 {
  x = a;
  while(x > 0 and mahasiswa[x].nilai < mahasiswa[x-1].nilai)
  {
   swap(mahasiswa[x], mahasiswa[x-1]);
   x--;
  }
 }
 
 cout<<"> INSERTION SORT BERDASARKAN NILAI"<<endl;
 print_data();
 
 //BERDASARKAN NISN
 for(int a=1; a<7; a++)
 {
  x = a;
  while(x > 0 and mahasiswa[x].NISN < mahasiswa[x-1].NISN)
  {
   swap(mahasiswa[x], mahasiswa[x-1]);
   x--;
  }
 }
 
 cout<<"> INSERTION SORT BERDASARKAN NISN"<<endl;
 print_data();
}

void data_awal()
{
 mahasiswa[0].NISN = 9960312699;
 mahasiswa[0].nama = "Handi Ramadhan";
 mahasiswa[0].nilai = 90;
 
 mahasiswa[1].NISN = 9963959682;
 mahasiswa[1].nama = "Rio Alfandra";
 mahasiswa[1].nilai = 55;
 
 mahasiswa[2].NISN = 9950310962;
 mahasiswa[2].nama = "Ronaldo Valentino Uneputty";
 mahasiswa[2].nilai = 80;
 
 mahasiswa[3].NISN = 9970272750;
 mahasiswa[3].nama = "Achmad Yaumil Fadjri R.";
 mahasiswa[3].nilai = 60;
 
 mahasiswa[4].NISN = 9970293945;
 mahasiswa[4].nama = "Alivia Rahma Pramesti";
 mahasiswa[4].nilai = 70;
 
 mahasiswa[5].NISN = 9952382180;
 mahasiswa[5].nama = "Ari Lutfianto";
 mahasiswa[5].nilai = 65;
 
 mahasiswa[6].NISN = 9965653989;
 mahasiswa[6].nama = "Arief Budiman";
 mahasiswa[6].nilai = 60;
 
 cout<<"> DATA AWAL"<<endl;
 print_data();
}

int main()
{
 int temp;
 
 data_awal();
 insertion_sort();
 
 selection_sort();
 
 bubble_sort();
 
 //BINARY SEARCH
 temp = binser(0, 6, 9950310962);
 cout<<"> BINARY SEARCH NISN 9950310962"<<endl;
 cout<<mahasiswa[temp].NISN<<' '<<mahasiswa[temp].nama<<' '<<mahasiswa[temp].nilai<<endl<<endl;
 
 cout<<"> SEQUENTIAL SORT NILAI 60"<<endl;
 sequential_search(60);
 
 print_data();
}
