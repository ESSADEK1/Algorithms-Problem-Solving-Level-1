#include<iostream>
using namespace std;

enum enPassFailed { Pass = 1, Failed = 0 };

int ReadMarks() {
	int Mark;
	cout << "Read Mark" << endl;
	cin >> Mark;
	return Mark;
}
enPassFailed Check(int Mark) {
	if (Mark >= 50) {
		return enPassFailed::Pass;
	}
	else {
		return enPassFailed::Failed;
	}
}
void PrintMarks(int Mark) {
	if (Check(Mark) == enPassFailed::Pass) {
		cout << "Pass " << endl;
	}
	else {
		cout << "Failed " << endl;
	}
}
int main() {

	PrintMarks(ReadMarks());
	return 0;
}


