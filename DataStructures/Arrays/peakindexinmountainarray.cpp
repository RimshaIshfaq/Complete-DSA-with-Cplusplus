// PEAK INDEX IN MOUNTAIN ARRAY
// e.g: arr=[0,3,8,9,5,2]
// Leetcode problem no. 852

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size()-2;

        while ( st <= end){
            int mid = st + (end - st) / 2;

            if (A[mid-1] < A[mid] && A[mid] > A[mid+1]){
                return mid;
            } else if(A[mid-1] < A[mid]){ // right
                st = mid +1;
            } else {
                end = mid -1;
            }
        }
        return -1;
    }
};

// time complexity is O(log n)