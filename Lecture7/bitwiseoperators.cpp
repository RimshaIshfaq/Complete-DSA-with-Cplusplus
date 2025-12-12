// BITWISE OPERATORS

// bitwise & (AND)  
// bintwise | (OR)
// bitwise ^ (XOR) (exclusive OR) //same = 0, different = 1
// bitwise >> (right shift operator)
// bitwise << (left shift operator)


#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 3;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (4 << 1) << endl; //left shift
    cout << (4 >> 1) << endl; //right shift
    return 0;
}