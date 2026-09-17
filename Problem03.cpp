#include<iostream>
#include<string>
using namespace std;

enum enNumType{ Odd=1,Even=2};

int ReadNumber() {
	int Num;
	cout << "Please enter a number ? " << endl;
	cin >> Num;
	return Num;
}

enNumType CheckNumberType(int Num) {
	int Result = Num % 2;
	if (Result == 0)
		return enNumType::Even;
	else
		return enNumType::Odd;
}
void PrintNumberType(enNumType NumberType) {
	if (NumberType ==enNumType::Even) {
		cout << "EVEN";
	}
	else {
		cout << "ODD";
	}
}
	int main() {
		PrintNumberType(CheckNumberType(ReadNumber()));
	}
