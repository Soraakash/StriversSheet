// Given an array Arr of size N, print second largest distinct element from an array.

// Example 1:

// Input: 
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.
   
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 10^5
// 1 ≤ Arri ≤ 10^5

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int  maxx = -1;
	    int sec=-1;
	    for(int i=0;i<n;i++)
	    {
	     if(arr[i]>maxx)
	        maxx = arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>sec && arr[i] != maxx)
	            sec = arr[i];
	    }
	    return sec;
	}
};
