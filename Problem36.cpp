#include <iostream>
#include <string>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType() {
	char OT = '+';
	cout << "Please enter Operation Type ( +, - , * , / )?\n";
	cin >> OT;
	return (enOperationType)OT;}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;  // Perform addition.
    case enOperationType::Subtract:
        return Number1 - Number2;  // Perform subtraction.
    case enOperationType::Multiply:
        return Number1 * Number2;  // Perform multiplication.
    case enOperationType::Divide:
        return Number1 / Number2;  // Perform division.
    default:
        return Number1 + Number2;  // Default case (fallback to addition).
    }
}
int main()
{
    // Read the first and second numbers from the user.
    float Number1 = ReadNumber("Please enter the first number?");
    float Number2 = ReadNumber("Please enter the second number?");

    // Read the operation type from the user.
    enOperationType OpType = ReadOpType();

    // Perform the selected operation and display the result.
    cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;

    return 0;  // Return 0 to indicate successful execution.
}
