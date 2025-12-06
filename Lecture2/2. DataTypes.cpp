//This program demonstrates various primitive data types in C++ and typecasting.

#include <iostream>
using namespace std;


int main(){
    // These all are primitive data types

    int age=22;   //4 bytes
    char score='A'; //1 byte
    float PI=3.14f;  //4 bytes
    bool isAdult=true; //1 byte
    double largeDecimal=3.141592653589793;  //8 bytes
    cout << PI << endl;

    //typecasting  //converting type from one to another
    // two methods
    //1 type conversion (implicit) compiler does it, no memory loss, converting from smaller to larger data type
    //2 type casting (explicit) programmer does it, may cause memory loss, converting from larger to smaller data type

    char grade ='A'; //ASCI value 65
    int value=grade; //implicit type conversion
    cout << value << endl;

    double price=65.99;
    int newprice = (int)price; //explicit type casting
    cout << newprice << endl;

    return 0;
}

