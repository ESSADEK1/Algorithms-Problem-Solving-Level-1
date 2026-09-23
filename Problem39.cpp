#include<iostream>
using namespace std;

float ReadPositiveNumber(string Message) {

	float Number = 0;
	do
	{
		cout << Message << endl;  // Display the provided message.
		cin >> Number;  // Read the number entered by the user.
	} while (Number <= 0);  // Repeat if the number is non-positive.

	return Number;  // Return the validated positive number.
};
	


float CalcluateRemainder(float TotallBill, float TotalCashPaid) {
	return TotalCashPaid - TotallBill;
}

int main() {

	float TotalBill = ReadPositiveNumber("Please Enter Total Bill :");
	float TotalCashPaid = ReadPositiveNumber("Please Enter CashPadi : ");

	cout << endl;

	cout << "Total Paid : " << TotalBill;
	cout << "TotalCashPaid : " << TotalCashPaid;

	cout << endl;

	cout << "Remainder : " << CalcluateRemainder(TotalBill, TotalCashPaid);
	return 0;
}
