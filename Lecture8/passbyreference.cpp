// Pass by Reference
// In two ways:
// 1. Pointers
// 2. refrences (Alias)

#include <iostream>
using namespace std;

void changeA(int* ptr){ //pass by val
    *ptr = 20;
}

int main(){
    int a = 10;
    changeA(&a);

    cout << "inside main fnx " << a << endl;
    return 0;

}

// array pointers
// Array is a pointer in C++
// constant pointer, cannot be changed
// it's address is equal to the address of forst value of array at 0th index.
