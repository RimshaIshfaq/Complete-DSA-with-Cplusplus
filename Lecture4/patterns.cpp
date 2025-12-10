// This program demonstrates some common design patterns in C++
// How to solve pattern problems 
// 1. Understand the pattern and count no. of lines
// 2. In nested loops, outer loop is for no. of lines
// 3. Inner loop is for prinitng each line

#include <iostream>
using namespace std;

//pattern 1
// either take it as {i=1 to n} or {i=0 to (n-1)}

// int main(){
//     int n;
//     cout << "Enter number of lines: ";
//     cin >> n;
//     for (int i=1; i<=n; i++){  //outer loop
//         for (int j=1; j<=i; j++){  // inner loop
//             cout << j ;
//         }
//         cout << endl;
//     }
// }

// square pattern containing alphabets

// int main(){
//     int n;
//     cout << "Enter number of lines: ";
//     cin >> n;
//     for (int i=0; i<n; i++){  //outer loop
//         char ch = 'A';   
//         for (int j=0; j<n; j++){  // inner loop
//             cout << ch ;
//             ch++;               // increment character to next alphabet
//         }
//         cout << endl;
//     }
// }

// // square pattern but num is increasing

// int main(){
//     int n;
//     cout << "Enter number of lines: ";
//     cin >> n;
//     int num=1;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=n; j++){
//             cout << num << " ";
//             num ++;
//         }
//         cout << endl;
//     }
// }


// Triangle patten with stars

// int main(){
//     int n;
//     cout << " Enter the number of lines: ";
//     cin >> n;
//     for (int i=1; i<=n; i++){
//         for (int j=1;j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Triangle pattern with numbers

// int main(){
//     int n;
//     cout << " Enter the number of lines: ";
//     cin >> n;
//     for (int i=1; i<=n; i++){
//         for (int j=1;j<=i; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }


// Triangle pattern with numbers

// int main(){
//     int n;
//     cout << " Enter the number of lines: ";
//     cin >> n;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){

//             cout << j ;
//         }
//         cout << endl;
//     }
// }


// // Reverse Triangle Pattern with numbers

// int main(){
//     int n;
//     cout << " Enter the number of lines: ";
//     cin >> n;
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j>0; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// Floyd's Triangle

// int main(){
//     int n;
//     cout << " Enter the number of lines: ";
//     cin >> n;
//     int num=1;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

// Inverted Trriangle Pattern

// int main(){
//     int n;
//     cout << " Enter the number of lines ";
//     cin >> n;
//     int num =1;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i; j++){
//             cout << " ";
//         }
//         for (int j=0; j<n-i; j++){
//             cout << (i+1);
//         }
//         cout << endl;
//     }
// }


// Pyramid Pattern with numbers

// int main(){
//     int n;
//     cout << " Enter the number of lines";
//     cin >> n;
//     for (int i=0; i<n; i++){
//         // spaces
//         for (int j=0; j< n - i -1; j++){
//             cout << "  ";
//         }
//         // nums1
//         for (int j=1; j<=i+1; j++){
//             cout << j;
//         }
//         //nums2
//         for (int j=i; j>0; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
// }



// Diamond Pattern with stars