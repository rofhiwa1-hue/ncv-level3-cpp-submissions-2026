#include <iostream>;

using namespace std;
int main(){
    string Name;
    string Gender;

    cout << "What is your name?" << endl;
    cin >> Name;
    cout<< "What is your Gender?"<< endl;
    cout << "M (Male) : F (female) : W (for wonder)";
    cin>> Gender ;
    cout << "Hello: " << Name <<endl;
    if(Gender == "m"){
        cout << "you are a clever man";
    }
    else if(Gender == "f"){
        cout << "you are a beautiful lady";
    }
    else if(Gender == "w"){
        cout << "you are an alien";
    }
    else{
        cout << "invalid ";
    }

};
