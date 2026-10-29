#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void getNumbers(double &num1, double &num2);
double getSum(double n1, double n2);
double getDifference(double n1, double n2);
double getProduct(double n1, double n2);
double getQuotient(double n1, double n2);


int main() {

    srand(time(0));
    double num1 = (rand() % 50) + 1;
    double num2 = (rand() % 50) + 1;

    char op;

    cout << "--- Math Quiz ---" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;


    cout << "Enter a math operator (+, -, *, /): ";
    cin >> op;


    cout << "Result: ";
    switch (op) {
        case '+':
            cout << getSum(num1, num2) << endl;
            break;
        case '-':
            cout << getDifference(num1, num2) << endl;
            break;
        case '*':
            cout << getProduct(num1, num2) << endl;
            break;
        case '/':

            if (num2 != 0) {
                cout << getQuotient(num1, num2) << endl;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;
        default:

            cout << "Invalid math operation entered." << endl;
    }

    return 0;
}


void getNumbers(double &num1, double &num2) {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

double getSum(double n1, double n2) {
    return n1 + n2;
}

double getDifference(double n1, double n2) {
    return n1 - n2;
}

double getProduct(double n1, double n2) {
    return n1 * n2;
}

double getQuotient(double n1, double n2) {
    return n1 / n2;
}
