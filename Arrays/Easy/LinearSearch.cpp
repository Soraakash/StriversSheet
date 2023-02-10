// Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.

// Example 1:

// Input:
// N = 5, K = 6
// arr[] = {1,2,3,4,6}
// Output: 1
// Exlpanation: Since, 6 is present in 
// the array at index 4 (0-based indexing),
// output is 1.
  
// Expected Time Complexity: O(Log N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 10^6
// 1 <= K <= 10^6
// 1 <= arr[i] <= 10^6

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
        for(int i=0;i<N;i++)
            if(arr[i] == K)
                return 1;
       // Your code here
       return -1;
    }
};
