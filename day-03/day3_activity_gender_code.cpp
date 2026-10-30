#include <iostream>
#include <cmath>

using namespace std;

//int main()
//{
  // char genderCode;

    //cout << "Enter gender code (M or F): ";
    //cin >> genderCode;

    //if (genderCode == 'M' || genderCode == 'm')
    //{
      //  cout << "Male";
   // }
    //else if (genderCode == 'F' || genderCode == 'f')
    //{
        //cout << "Female";
   // }
   // else
    //{
       // cout << "Invalid gender code";
    //}

   // return 0;
//}


//#include <iostream>
//#include <cmath>

//using namespace std;

int main()
{


    char genderCode;

    cout << "Enter gender code (M or F): ";
    cin >> genderCode;
    switch (genderCode)
    {
    case 'M':
    case 'm':
        cout << "Female";
        break;

    default:
        cout << "Invalid gender code";
    }
    return 0;
}
