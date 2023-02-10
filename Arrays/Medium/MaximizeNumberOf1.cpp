// Given a binary array arr of size N and an integer M. Find the maximum number of consecutive 1's produced by flipping at most M 0's.
 
// Example 1:

// Input:
// N = 3
// arr[] = {1, 0, 1}
// M = 1
// Output:
// 3
// Explanation:
// Maximum subarray is of size 3
// which can be made subarray of all 1 after
// flipping two zeros to 1.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
 
// Constraints:
// 1 <= N <= 10^7
// 0 <= M <= N
// 0 <= arri <= 1

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int wL = 0 , wR = 0;
        int countZeros = 0;
        int ans = 0;
        while(wR<n)
        {
            if(countZeros <= m)
            {
                if(arr[wR] == 0)
                    countZeros++;
                wR++;
            }
            if(countZeros > m)
            {
                if(arr[wL]==0)
                    countZeros--;
                wL++;
            }
            ans = max(ans,wR-wL);
        }
        return ans;
    }  
};
