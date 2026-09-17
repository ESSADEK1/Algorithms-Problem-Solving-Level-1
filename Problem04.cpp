#include<iostream>
using namespace std;

struct stInfo{
	int Age;
	bool DriverLicense;};

stInfo ReadInfo() {

	stInfo Info;
	cout << "Age: " << endl;
	cin >> Info.Age;

	cout << "Driver licence : " << endl;
	cin >> Info.DriverLicense;
	return Info;
}
bool IsAccepted(stInfo Info) {

	return (Info.Age >= 21 && Info.DriverLicense );
}
void PrintResult(stInfo Info) {
	if (IsAccepted(Info)) {
		cout << "HIRED";
	}
	else {
		cout << "REJECTED";
	}
}

	int main() {
		stInfo Info;

		PrintResult(ReadInfo());

		return 0;
	}
