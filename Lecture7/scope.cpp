// Scope of Variables in C++
// Scope: the region of the program where a variable is accessible
// Local vs Global
// Local variables are declared within a function or block and can only be accessed within that function or block

// Global variables are declared outside of all functions and can be accessed from any function within the same file 
// (or other files if declared extern)

#include <iostream>
using namespace std;

int x = 10; //global variable

void func(){
    int y = 5; //local variable
    cout << "Inside func, x: " << x << endl;
}

int main(){
    cout << "In main, x: " << x << endl; //accessing global variable
 //   cout << "In main, y: " << y << endl; //error: y is not accessible here
    func(); //calling function to access local variable
    return 0;
}
