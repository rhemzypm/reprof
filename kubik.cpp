#include <iostream>
#include <math.h>
using namespace std;

int kubik(int n)	{ if(n==1) return pow(n,3); else return kubik(n-1) + pow(n,3);}
int main()			{int n;	cin >> n;	cout << kubik(n);}


