// Leetcode 
// problem no. 136
// Single Number
// Given a non empty array of integers numx, every element appears twice except one number, fnd the single number.
// You must implement a solution with a linear runtime complexity (do not use nested loop)  and use only constant extra space.

// put ampersand if you want pass by reference
// XOR / n^0=n  / n^n = 0

class Solution {
public:
    int singleNumber(vector<int>& nums){
        int ans = 0;

        for (int val : nums) {
            ans = ans ^ val;
        }

        return ans;

    }
};