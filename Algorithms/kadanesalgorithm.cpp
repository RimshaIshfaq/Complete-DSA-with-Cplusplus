// kadane's algorithm
// it is a type of dynamic programming
// most opitmized approach
// Leet Code problem no. 53

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0; 
        int maxSum= INT_MIN;

        for (int val:nums){
            currSum += val;
            maxSum = max(currSum, maxSum);

            if (currSum < 0){
                currSum = 0;
            }
        } 
        return maxSum;    
    }
};

// time complexity is O(n)
// space complexity is O(1)