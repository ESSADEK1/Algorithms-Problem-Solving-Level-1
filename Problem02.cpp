#include<iostream>
#include<string>
using namespace std;

string ReadName() {
	string FullName;
	cout << "Name : ";
	getline(cin, FullName);
    
	return FullName;
}

void PrintName(string Name) {
	cout << Name;
}

int main() {
	PrintName(ReadName());
}
