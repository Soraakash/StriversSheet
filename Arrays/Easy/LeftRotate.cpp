// Given an array arr[] of size N and an integer K, the task is to left rotate the array K indexes

// Example 1:

// Input: N = 7, K = 2
// arr[] = {1, 2, 3, 4, 5, 6, 7}
// Output: 3 4 5 6 7 1 2
// Explanation: Rotation of the above 
// array by 2 will make the output array .
  
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 10^5

public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	    k%=n;
        reverse(arr, arr+n);
        reverse(arr, arr+(n-k));
        reverse(arr+(n-k), arr+n);
	} 
