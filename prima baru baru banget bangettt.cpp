#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	
	int x,c;
	bool prima;
	
	cout << "masukan bilangan yang akan dicekkkk"<< endl;
	cin >> x;
	
	if (x==2)
	cout<<"2 merupakan bil. prima"<< endl;
	
	else {
		for(int i=2;i<x;i++){
			c=x%i;
			
			if(c==0) {
			prima = false; break;
			}
			else prima = true;
		}
	if (prima) cout << x << " merupakan prima";
	else cout << x << " bukan prima";
		
	}
	
	
	}

