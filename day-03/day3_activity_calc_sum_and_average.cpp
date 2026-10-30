#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    double average;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter number (from 1 - 50) " << i << ": " << endl;
        cin >> number;

        sum = sum + number;
    }

    average = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
