
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double length, breadth, area, perimeter, radius;



    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;


    area = length * breadth;
    perimeter = 2 *(length) + 2 *(breadth);
     area = PI * radius * radius;


    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    const double PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;



    cout << "The area of the circle is: " << area << endl;


    return 0;
}
