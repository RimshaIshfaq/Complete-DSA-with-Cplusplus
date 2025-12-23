// Reverse a charcater array
// LeetCode problem no. 344

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int st = 0;
//         int end = s.size()-1;

//         while (st < end) {
//             swap(s[st++],s[end--]);
//         }
//     }
// };

// Reverse a string

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="rimsha ishfaq";
    reverse(str.begin(), str.end()); //iterators
    cout << str << endl;
    return 0;
}