// This program demonstrates the use of conditional statements in C++

#include <iostream>

using namespace std;
// Comment in using ctrl or cmd + / to comment in bulk
// You can comment in the ones you want to ignore
int main(){
    if-else
    int n = 23;
    if (n<0){
        cout << "n is negative\n";
    }
    else{
        cout << "n is positive\n";
    }


    //let's make one for voting

    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age>=18){
        cout << "You are eligible to vote\n";
    }
    else{
        cout << "You are not eligible to vote\n";
    }

    //let's make one for checking even odd
    int m;
    cout << "Enter a number: ";
    cin >> m;
    if (m%2==0){
        cout << "m is even\n";
    }
    else{
        cout << "m is odd\n";
    }

    //if-elseif-else 

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks>=90){
        cout << "Grade A\n";
    }
    else if (marks>=70 && marks<90){
        cout << "Grade B\n";
    }
    else{
        cout << "Grade C\n";
    }

    //check if character is uppercase or lowercase
    //characters can be compared with numbers based on their ASCII values, 
    // as they are saved in integer format in memory. (implicit typecasting)
    
    char ch;
    cout << "Enter a character: ";  
    cin >> ch;
    if (ch>='A' && ch<='Z'){
        cout << "Uppercase letter\n";
    }
    else if (ch>='a' && ch<='z'){
        cout << "Lowercase letter\n";
    }
    else {
        cout << "Not an alphabet\n";
    }
    return 0;
}