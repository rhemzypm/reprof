#include <iostream>
using namespace std;

int main(){
	
//declaring all the variable and each data type
	float loan;		//the total amount borrowed
	float mplan;	//monthly payment plan
	float rate;		//interest rate per year
	float pay;		//each payment toward the principal amount
	int n=0;  //variable n month, to count how many times the loop repeated
	
//inputing the loan, monthly payment, and rate

	cout << "Input the loan amount = ";
	cin >> loan;
	cout << endl << "Input the monthly payment plan = ";
	cin >> mplan;
cout << endl << "Input the interest rate per year in percentage (without typing %) = ";
	cin >> rate;
	
//checking wether the monthly payment plan is able to be repaid

	if (mplan < loan*rate/100/12) {
cout << "monthly payment is too low, and with this monthly payment, the loan amount could not be repaid";
	}

//the process/loop where the calculation works
/*loop will be stopped when the remaining loan is smaller than 0 which mean the loan has been done repaid*/
/*the variable n will be incremented (plus 1) everytime the loop run or repeated in order to count how many times untill the loan reaches 0*/

	while(loan>0){
		pay = mplan - loan*rate/100/12;
		loan = loan - pay;
		n++;
	}
	 
//output n as the result of the number of months will be taken to repay
	cout << "will be repaid in = " << n << "months";
		
}

