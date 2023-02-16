// Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.
  
// Example 1:

// Input:
// N = 5
// arr[] = {1 2 3 4 5} 
// K = 4
// Output: 3
// Explanation: 4 appears at index 3.
  
// Expected Time Complexity: O(LogN)
// Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.


// Constraints:

// 1 <= N <= 10^5
// 1 <= arr[i] <= 10^6
// 1 <= K <= 10^6

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(arr[mid] == k)
                return mid;
            else if(arr[mid]<k)
                low = mid +1;
            else
                high = mid -1;
        }
        return -1;
    }
};
