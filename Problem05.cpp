#include<iostream>
using namespace std;

struct stInfo {
	int Age;
	bool DriverLicense;
	bool Recommandation;
};

stInfo ReadInfo() {

	stInfo Info;
	cout << "Age: " << endl;
	cin >> Info.Age;

	cout << "Driver licence : " << endl;
	cin >> Info.DriverLicense;

	cout << "Recommandation :" << endl;
	cin >> Info.Recommandation;
	return Info;
}
bool IsAccepted(stInfo Info) {
	if (Info.Recommandation) {
		return true;
	}
	else {

		return ((Info.Age >= 21 && Info.DriverLicense));
	}
	};
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
