// Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x 
// is defined as the largest element K in arr[] such that K is smaller than or equal to x. 
// Find the index of K(0-based indexing).

// Example 1:

// Input:
// N = 7, x = 0 
// arr[] = {1,2,8,10,11,12,19}
// Output: -1
// Explanation: No element less 
// than 0 is found. So output 
// is "-1".


// Expected Time Complexity: O(log N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 10^7
// 1 ≤ arr[i] ≤ 10^18
// 0 ≤ X ≤ arr[n-1]


class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x){
        // Your code here
        long ans = -1;
        long long low = 0;
        long long mid ;
        long long high = n-1;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(v[mid] == x)
                return mid;
            if(v[mid] < x)
            {
                ans = mid;
                low = mid +1;
            }
            else
                high = mid - 1;
        }
        return ans;
        
    }
};
