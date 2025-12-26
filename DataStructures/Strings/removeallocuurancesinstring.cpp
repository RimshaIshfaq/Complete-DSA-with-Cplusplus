
// Remove all occurrences of a substring from a string
// Leetcode Problem 1910


class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
        
    }
};