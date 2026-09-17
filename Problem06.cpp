#include<iostream>
using namespace std;

struct stInfo {

	string FirstName;
	string LastName;

};

stInfo ReadInfo() {
	stInfo Info;
	cout << "Your First Name : " << endl;
	cin >> Info.FirstName;
	cout << "Your Last Name : " << endl;
	cin >> Info.LastName;
	return Info;
}

string GetFullName(stInfo Info) {
	string FullName;
	FullName =Info.FirstName+" "+Info.LastName;
	return FullName;

}

void PrintFullName(string FullName) {
	cout << "Your Full Name : " << FullName;
}

int main() {
	PrintFullName(GetFullName(ReadInfo()));
}
