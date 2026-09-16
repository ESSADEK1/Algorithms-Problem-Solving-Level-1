#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>      // Include cmath to use pow() for exponentiation.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

void ReadTriangleData(float& A, float& B)
{
    cout << "Please enter triangle side A ? " << endl;
    cin >> A;

    cout << "Please enter triangle base B ? " << endl;
    cin >> B;
}


float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.141592653589793238;  

    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area;  // Return the computed area.
}


void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

// Main function: Program entry point.
int main()
{
    float A, B; 

    PrintResult(CircleAreaByITriangle(A, B));

    return 0;  // Return 0 to indicate successful execution.
}
