// Reverse an Array
// we will be using 2 pointer approach // swap(arr[start], arr[end])
// swap first and last element and move towards middle

#include <iostream>
using namespace std;

void reversearray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while (start < end){
        // swap
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size = 5;

    reversearray(arr, size);

    // print reversed array
    for (int i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Time complexity is O(n)