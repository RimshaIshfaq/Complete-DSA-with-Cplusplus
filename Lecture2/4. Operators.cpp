#include <iostream>
using namespace std;

int main(){
    //arithmetic operators
    int a=10, b=5;
    cout << "sum:" << a+b << endl;
    cout << "difference:" << a-b << endl;
    cout << "product:" << a*b << endl;
    cout << "division:" << a/b << endl;
    cout << "modulus:" << a%b << endl;

    //relational operators
    cout << (3>5) << endl;
    cout << (3<5) << endl;
    cout << (3>=5) <<endl;
    cout << (3<=5) << endl;
    cout << (3==5) << endl; 
    cout << (3!=5) << endl;

    //logical operators
    cout << ((3<5) || (2<1)) << endl; //OR
    cout << ((3<5) && (2<1)) << endl; //AND
    cout << (!(3<5)) << endl; //NOT
    return 0;
}