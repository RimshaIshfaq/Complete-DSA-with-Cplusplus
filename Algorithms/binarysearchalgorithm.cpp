// BINARY SEARCH ALGORITHM
// only appied on sorted array or sorted strings
// sorted is also called as monotonic

#include <iostream>
#include <vector>
using namespace std;

// iterative method


int binarySearch(vector<int> arr, int tar) {
    int st=0; 
    int end=arr.size()-1;

    while(st <=end) {
        int mid = st + (end - st)/2

        if (tar > arr[mid]){
            st = mid + 1;
        }
        else if (tar < arr[mid]){
            end = mid - 1;
        } 
        else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 7, 8, 10, 12};
    int tar1 = 12;
    
    cout << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {2, 4, 8, 10, 14, 16};
    int tar2 = 8;

    cout << binarySearch(arr2, tar2) << endl;

    return 0;
}


/* for optimization we will replace:
    int mid = (st + end) / 2;

    with

    int mid = st + (end - st)/2

    to avoid the codition of overflowing


    time complexity:
    n = 2^k
    log 2 n = k
    O(log n)

*/ 




