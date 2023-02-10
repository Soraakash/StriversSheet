// Given an array A[] of size n. The task is to find the largest element in it.
 
// Example 1:

// Input:
// n = 5
// A[] = {1, 8, 7, 56, 90}
// Output:
// 90
// Explanation:
// The largest element of given array is 90.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= n<= 10^3
// 0 <= A[i] <= 10^3
// Array may contain duplicate elements. 

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
            maxi = max(maxi,arr[i]);
        return maxi;
    }
};
