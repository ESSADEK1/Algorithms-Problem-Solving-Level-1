#include <iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter Your Number : " << endl;
	cin >> Number;
	return Number;
}

void Powerof2_3_4(int Number) {
	int a, b, c;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;
	cout << a << endl << b << endl << c;


}
int main() {
	Powerof2_3_4(ReadNumber());
}
