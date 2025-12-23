// strings
// anything that is written inside inverted commas, e.g. "Rimsha", "89", "Love yourself"
// let's understand character arrays before diving into strings, it is also know as cstring.
// our strings can be stored in charcater arrays

#include <iostream>
#include <string>
using namespace std;

int main(){

    // character arrays
    char str[] = {'a','b','c'}; //constant pointers
    char str1[] = {'a','b','c','\0'}; // now string is saved in it
    char str2[] = {"meow"}; //string literals

    cout << str2[2] << endl;
    cout << str2 << endl;

    // let's try taking string in it
    char strm[100];
    cout << "Enter character array: ";
    cin.getline(strm, 100, '$');
    cout << "output: " << strm << endl;

    /* when we enter something using cin, it ignore everything after space, for example:
    if i give it "hello world", it will take "hello" only and ignore everything after space,
    so in case of string we use: cin.getline(str,len,delime?)
    str === string, we wanna enter
    len === length of string
    delim? === delimiter
    */

    /* String is dynamic in nature, becuase it can be updated in runtime 
        Data is stored in contagious manner */

    string me="rimsha isbfaq";

    cout << me << endl;
    me = "engineering girl";
    cout << me << endl;
    return 0;
}

