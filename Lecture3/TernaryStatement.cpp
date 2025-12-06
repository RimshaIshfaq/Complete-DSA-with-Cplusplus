// This program demonstrates the use of the ternary operator in C++
// to simplify conditional statements
// it is used as a shorthand for if-else statements (for simple if else)
// condition ? expression1 : expression2;
#include <iostream>
using namespace std;

int main(){
    int n = 23;
    // using ternary operator to check if n is positive or negative
    cout << (n < 0 ? "n is negative\n" : "n is positive\n");
    return 0;

}

