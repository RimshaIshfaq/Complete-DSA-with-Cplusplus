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
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        if (i%2 !=0){
            sum += i;
        }
    }

    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}


    // check if a number is prime or not

    int n;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=2; i<=(n-1); i++){
        if (n%i ==0){
            isPrime = false;
            break;
        }

    if (isPrime = true){
        cout << n << " is a prime number" << endl;
    }
    else{
        cout << n << " is not a prime number" << endl;
    }



// let us optimize this code
    int n;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=2; i*i<=n; i++){
        if (n%i ==0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << n << " is a prime number" << endl;
    }
    else{
        cout << n << " is not a prime number" << endl;
    }
    }


// let us solve an example problem
// Sum of all numbers divisible by 3 from 1 to n


int main(){
    int n;
    int sum=0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        if (i%3 ==0){
            sum += i;
            cout << "Sum is: " << sum << endl;
        }
    }
}

// Print a factorial of a number n

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int factorial = 1;
    for (int i=1; i<=n; i++){
        factorial *=i;
    }
    cout << "Factorial is: " << factorial << endl;
}