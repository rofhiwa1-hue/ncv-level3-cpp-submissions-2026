#include <iostream>
using namespace std;

int main() {

    int numbers[5];
    int evenCount = 0;

    cout << "Please enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }
    cout << "\nTotal even numbers entered: " << evenCount << endl;

    cout << "Values stored in the array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
