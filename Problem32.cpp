#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Enter Number : " << endl;
	cin >> Number;
	return Number;
}

int ReadPower() {
	int Power;
	cout << "Enter Power : " << endl;
	cin >> Power;
	return Power;
}

int PowerOfM(int Number, int M) {

	if (M == 0) {
		return 1;
	}

	int P = 1, i;

	for (i = 1;i <= M;i++) {
		P = P * Number;
	}
	return P;
}
int main()
{
	
	cout << endl << "Result = " <<endl<< PowerOfM(ReadNumber(), ReadPower()) << endl;

	return 0;  // Return 0 to indicate successful execution.
}
