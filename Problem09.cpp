#include <iostream>
using namespace std;

void ReadMarks(int& Num1, int& Num2, int& Num3) {
    cout << "Enter Num1: ";
    cin >> Num1;

    cout << "Enter Num2: ";
    cin >> Num2;

    cout << "Enter Num3: ";
    cin >> Num3;
}

float SumofMarks(int Num1, int Num2, int Num3) {
    return Num1 + Num2 + Num3;
}

void PrintMarks(int Total) {
    cout << "\n The total sum of numbers is: " << Total << endl;
}


int main() {

    int Num1, Num2, Num3;

    ReadMarks(Num1, Num2, Num3);
    PrintMarks(SumofMarks(Num1, Num2, Num3));

    return 0;
}
