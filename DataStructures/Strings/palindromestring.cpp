// Find if a string is palindrome or not
// madam, racecar

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout << "enter the string you want to check";
    getline(cin,str);

    string str2=str;
    reverse(str2.begin(),str2.end());

    if (str == str2){
        cout << "the string palindrome";
    }
    else {
        cout << "The string is not a palindrome";
    }

    return 0;
}
