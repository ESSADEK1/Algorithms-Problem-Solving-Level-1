#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message) {

	int Number = 0;
	do
	{
		cout << Message << endl;  // Display the provided message.
		cin >> Number;  // Read the number entered by the user.
	} while (Number <= 0);  // Repeat if the number is non-positive.

	return Number;  // Return the validated positive number.
};
	
float HoursToDays(float NumbersofHours) {
	return (float)NumbersofHours / 24;
}
float HoursToWeeks(float NumbersofHours) {
	return (float)NumbersofHours / 168;
}
float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;
}

    int main()
    {
        // Read the number of hours from the user.
        float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");

        // Convert hours to days.
        float NumberOfDays = HoursToDays(NumberOfHours);

        // Convert days to weeks.
        float NumberOfWeeks = DaysToWeeks(NumberOfDays);

        cout << endl;  // Print an empty line for formatting.

        // Display the total hours, days, and weeks.
        cout << "Total Hours = " << NumberOfHours << endl;
        cout << "Total Days = " << NumberOfDays << endl;
        cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

        return 0;  // Return 0 to indicate successful execution.
    }
