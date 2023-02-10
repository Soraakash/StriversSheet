// Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

// Example 1:

// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).
  
// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N, M ≤ 10^3
// 0 ≤ Arr[i][j] ≤ 1 

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i = 0;
	    int j = m-1;
	    int ans = -1;
	    while(i<n && j>=0)
	    {
	        if(arr[i][j] == 1)
	       {
	           ans = i;
	           j--;
	       }
	       else if(arr[i][j] == 0)
	            i++;
	    }
	    return ans;
	}

};
