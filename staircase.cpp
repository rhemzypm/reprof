#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {


}

int main()
{
	//deklarasi setiap variabel
    int n,i, times, space;
    string hashtag("#");
    
    //input tinggi tangga yang dipinginkan
    cin >> n;

	//loop didalam loop
	//loop pertama untuk urusan masing masing level tangga
    for(i=1;i<=n;i++){
    	//loop yang kedua ini untuk urusan membentuk barisan hashtag di masing masig level sesuai aturan
        for(space=i;space<=n-1;space++) cout << " "; // ini output spasi biar tangganya align ke kanan
        for(times=1;times<=i;times++) cout << hashtag; // ini output hashtag sebagai tangganya
        if(i==n) break; // yang ini kalo udah tercapai kondisinya langsung mengakhiri loopnya tuh
        cout << endl; //turun baris berikutnya kalo urusan suatu level udah kelar
    }

    return 0;
}

