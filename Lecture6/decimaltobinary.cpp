// Decimal - base 10
// Binary - base 2

// Convert decimal to binary
// repeatedly divide the number by 2

#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0, pow=1;
    while (decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans; //binary form
}



int main(){
    int decNum = 6;
    cout << decToBinary(decNum) << endl;
    return 0;
}
