/* Linear Search Explanation (short)

Check each element one by one

Works on unsorted arrays

Time Complexity: O(n)

Best Case: O(1) (element at first index)

Worst Case: O(n) (element at last index or not present)

*/

// it will return the index here the key is present
// if key is not present it will return -1

#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i; // Key found at index i
        }
    }
    return -1; // Key not found
}


int main(){
    int arr[] ={4, 2, 7, 1, 9, 3};
    int sz = 6;
    int target = 1;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}
