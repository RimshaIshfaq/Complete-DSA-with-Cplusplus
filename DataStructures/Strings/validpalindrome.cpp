// Palindrom String Checker
/* A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
and removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers.
*/

// Leetcode Problem 125

class Solution {
public:
    bool isalphanumeric(char ch) {
        if((ch >= '0' && ch<='9') ||
        (tolower(ch) >='a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int st=0, end=s.length()-1;

        while (st<end) {
            if(!isalphanumeric(s[st])){
                st++; continue;
            }
            if(!isalphanumeric(s[end])){
                end--; continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++; end--;
        }
        return true;
    }
};


