// 
// while loop, for loop, do while loop
// never write infinite loops
#include <iostream>
using namespace std;

int main(){
    // while Loop
    int count = 1;
    while (count <=5){
        cout << "Count is: " << count << endl;
        count++;
    }
    cout << endl;

    // for Loop
    // for (initialization; condition; update)
    for (int i=1; i<=5; i++){
        cout << "i is: " << i << endl;
    }
    cout << endl;

    // Calculate the sum of numbers 1 to n
    int n;
    int sum =0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        sum +=i;
    }
    cout << sum << endl;
    return 0;

    // Do-While Loop
    // it will run once even if condition is false 
    // in do-while loop, work is done first, then condition is checked
    do{
        cout << "Hello World\n";
    }
    while (3>5);

    return 0;


    // Sum 1 to n odd numbers



    // check if a number is prime or not

    
}