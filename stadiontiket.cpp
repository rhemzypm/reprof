#include <iostream>

#include <fstream>

#include <iomanip>

using namespace std;

int main() {

   double total = 0;

   int nTickets = 0;

   ifstream infile("tickets.txt");

   int a, b;

   while (infile >> a >> b)
   {

       total = a*b;

       nTickets = nTickets + b;

   }

   cout << "Total Sale amount: " << total << endl;

   cout << "Number of tickets sold: " << setprecision(2) << nTickets << endl;

   system("pause");

   return 0;

}
