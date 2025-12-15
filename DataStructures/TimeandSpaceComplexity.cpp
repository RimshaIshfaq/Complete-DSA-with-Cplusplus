// Time and Space Complexity
// Actual execution time taken by code depends upon machine and servers which is not time complexity.
// Time complexity is the amount of time taken as function of input size (n)

// if no. of operations increases with input size, it is linear .
// it is O(n)



// Big O Notation
// It is notation for space and time complexity. it gives us worst case sceneior, also known as upper bound.

/*
Steps to find tiem complexity

1. Ignore constants
2. Consider only the largest term

example:
f(n) = 100 + 5n2 +(n)^1/2
  = n^2 + (n)^1/2
  = n^2
  time complexity fo this function is 0(n2)
*/

/* Notations
Worst time // upper bound  // O(n)
 Average time  // theeta
 best time // lower bound // omega
 */

 /* Space Complexity:
 Amount of apce taken by an algorithm as function of input size (n)
 Our code takes up space in two ways:
 - Input (vector, array, string etc) // it is not calculated in space complexity
 - Auxiliary Space (extra space), we only calculate this one in space complexity // output
 */

 /*Common Time Complexities:

O(1) Constant Time Complexity
/// Sum of number from 1 to N
int n;
cin >> n;
int ans = n * (n+1)/2;

0(n) Linear Time Complexity
/// N factorial
int fact = 1;
for (int i=1; i<=n; i++){
    fact*=i;
};
// nth fibonacci
//kadane's algorithm
// Moore's Voting Algorithm

O(n^2) Time Algorithm
// sorting 
// Bubble sort
for (int i=0; i<n-1; i++){
    for (int j=0; i<n-i-1; j++){
        if ( arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
for n=4
3k+2k+1k
(n-1)k + (n-2)k + (n-3)k+ 2k +.....+k
k*[n(n-1)/2]
kn^2/2 - kn/2
== k(n^2-n)
== O(n^2)

O(log n) 
// Binary Search Algorithm
int s=0, e=n-1;
while (s<=e){
    int mid = s + (e-s)/2;
    if (arr[mid] < target) {
        s = mid + 1;
    } else if(arr[mid] > target) {
        e = mid + 1; 
    } else {
        return mid; 
    }
}



 */



