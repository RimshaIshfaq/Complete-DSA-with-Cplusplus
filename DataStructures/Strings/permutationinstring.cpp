// Permutatio in String
/* Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.
*/  
// Leetcode Problem 567

class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for (char c : s1) {
            freq[c - 'a']++;
        }

        int windsize = s1.length();

        for (int i = 0; i + windsize <= s2.length(); i++) { 
            int windFreq[26] = {0};

            for (int j = 0; j < windsize; j++) {
                windFreq[s2[i + j] - 'a']++;
            }

            if (isFreqSame(freq, windFreq)) {
                return true;
            }
        }

        return false; 
    }
};
