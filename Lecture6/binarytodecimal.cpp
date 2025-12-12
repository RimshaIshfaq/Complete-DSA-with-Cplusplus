// This code converts binary to decimal

#include <iostream>
using namespace std;

int BinaryToDec(int binNum){
    int ans=0, pow=1;
    while (binNum > 0){
        int rem = binNum % 10;
        binNum = binNum / 10;
        ans += (rem * pow);
        pow = pow * 2;
    }
    return ans; // decimal form
}

int main(){
    int binNum = 1101;
    cout << BinaryToDec(binNum) << endl;
    return 0;
}