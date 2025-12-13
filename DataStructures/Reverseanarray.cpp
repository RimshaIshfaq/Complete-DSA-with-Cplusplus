#include <iostream>
using namespace std;

// When an array is passed to a function in C++,
// it is passed by reference by default. //address is passed
// This means the function receives the memory address of the array,
// not a copy of it.

void modifyArray(int arr[], int size) {
    // arr points to the same array that was created in main()

    arr[0] = 100;        // changing array element
    arr[1] = 200;        // changes will reflect in main()
}

int main() {
    int numbers[3] = {10, 20, 30};

    // Passing array to function
    // Only the base address of the array is passed
    modifyArray(numbers, 3);

    // Printing array after function call
    cout << "Array after function call:\n";
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
