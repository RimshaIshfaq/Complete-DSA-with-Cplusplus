// POINTER ARITHMETIC

// increment / decrement
// Address will be increased or decreased by byte of the type like for int it is 4 bytes, so after p++, 
// address would become 104 if it was 100 before

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;

    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    // if we subtract ptrs it will be no. of blocks of type
    int* ptr2;
    int* ptr1 = ptr2 + 2;
    cout << ptr1 - ptr2 << endl;

    return 0;
}
