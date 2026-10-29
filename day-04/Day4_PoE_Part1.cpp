#include <iostream>
#include <ctime>
using namespace std;


void getNumbers(double &num1, double &num2);
void displaySum(double n1, double n2);
void displayDifference(double n1, double n2);
void displayProduct(double n1, double n2);
void displayQuotient(double n1, double n2);

int main() {
    double num1, num2;


    getNumbers(num1, num2);


    displaySum(num1, num2);
    displayDifference(num1, num2);
    displayProduct(num1, num2);
    displayQuotient(num1, num2);

    return 0;
}


void getNumbers(double &num1, double &num2) {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

void displaySum(double n1, double n2) {
    cout << "Sum: " << (n1 + n2) << endl;
}

void displayDifference(double n1, double n2) {
    cout << "Difference: " << (n1 - n2) << endl;
}

void displayProduct(double n1, double n2) {
    cout << "Product: " << (n1 * n2) << endl;
}

void displayQuotient(double n1, double n2) {

    if (n2 != 0)
        cout << "Quotient: " << (n1 / n2) << endl;
    else
        cout << "Cannot divide by zero." << endl;
}
