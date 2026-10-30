
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (num1 % 2 == 0)
    {
        cout << num1 << " is an even number." << endl;
    }
    else
    {
        cout << num1 << " is an odd number." << endl;
    }

    if (num2 % 2 == 0)
    {
        cout << num2 << " is an even number." << endl;
    }
    else
    {
        cout << num2 << " is an odd number." << endl;
    }

    return 0;
}
