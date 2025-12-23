// loops on array
// find smallest/largest element in the array

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[]= {23, 5, 1, 66, -45, 0};
    int size = 6;

    int smallest = INT_MAX; //INT_MAX is positive infinity
    int largest = INT_MIN; //INT_MIN is negative infinity

    for (int i=0; i < size; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "Smallest element is: " << smallest << endl;
    cout << "Largest element is: " << largest << endl;

    return 0;
}

