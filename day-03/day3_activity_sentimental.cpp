#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, count = 0;
    double average;

    cout << "Enter a number (-1 to stop): ";
    cin >> number;

    while (number != -1)
    {
        sum = sum + number;
        count++;

        cout << "Enter a number (-1 to stop): ";
        cin >> number;
    }

if (count > 0)
    {
        average = (double)sum / count;

        cout << "Sum = " << sum << endl;
        cout << "Average = " << average << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}
