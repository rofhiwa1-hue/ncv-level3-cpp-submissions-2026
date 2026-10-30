#include <iostream>
using namespace std;


void populateArray(int arr[], int size);
int countEvenNumbers(int arr[], int size);
void displayOddNumbers(int arr[], int size);
void sortArray(int arr[], int size);
void displayArray(int arr[], int size);


int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int totalEvens;


    populateArray(numbers, SIZE);

    totalEvens = countEvenNumbers(numbers, SIZE);
    cout << "\nTotal even numbers: " << totalEvens << endl;


    displayOddNumbers(numbers, SIZE);


    sortArray(numbers, SIZE);


    cout << "\nArray sorted in ascending order: ";
    displayArray(numbers, SIZE);

    return 0;
}


void populateArray(int arr[], int size) {
    cout << "Please enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

int countEvenNumbers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void displayOddNumbers(int arr[], int size) {
    cout << "Odd numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
