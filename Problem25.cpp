#include<iostream>
using namespace std;

int ReadAge(){ 


    
    int Age;
    cout<<"Please Enter Your Age between 18 and 45 :  "<<endl;
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
    int Age ;  // Initialize Age variable.

    // Keep prompting the user until a valid age is entered.
    do
    {
        Age = ReadAge();  // Read user input.

    } while (!ValidateNumberInRange(Age, From, To));  // Repeat if the age is out of range.

    return Age;  
}
void PrintResult(int Age)
{
    cout << "Your Age is: " << Age << endl;
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));

    return 0;  
}
