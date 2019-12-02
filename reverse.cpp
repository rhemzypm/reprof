#include <iostream>
using namespace std;

int main (){
	int digit, num, rev = 0;
	cin >> num;
	
	while (num > 0){
		digit = num%10;
		rev = (rev*10) + digit;
		num = num/10;
		
	}
	
	cout << rev;
	
}
