// Single element in sorted array
// Leetcode problem no. 540
// time complexity should be O(log n)
// whenever word sorted is used, think of binary search algorithm

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if (n==1) return A[0];
        int st = A[0];
        int end = n - 1;



        while (st < end){
            int mid = st + ( end - st) / 2;
            if (A[mid - 1] != A[mid] && A[mid] != A[mid +1]) return A[mid];
            if (mid ==0 && A[0] != A[1]) return A[mid];
            if (mid == n-1 && A[n-1] != A[n-2]) return A[mid];
            
            if (mid%2==0) {
                // mid even, so numbers on right and left are odd
                if (A[mid] == A[mid-1]){
                    end = mid - 1;
                }
                else {
                    st = mid + 1;
                }
            } else {
                if (A[mid] == A[mid-1]){
                    st = mid + 1;
                }
                else { 
                    end = mid + 1;
                }
            }
        }
    
    return -1;
    }

};