// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size n and m respectively, find their union.

// Example 1:

// Input: 
// n = 5, arr1[] = {1, 2, 3, 4, 5}  
// m = 3, arr2 [] = {1, 2, 3}
// Output: 1 2 3 4 5
// Explanation: Distinct elements including 
// both the arrays are: 1 2 3 4 5.
  
// Expected Time Complexity: O(n+m).
// Expected Auxiliary Space: O(n+m).
 
// Constraints:
// 1 <= n, m <= 10^5
// 1 <= arr[i], brr[i] <= 10^6

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int> st;
        for(int i=0;i<n;i++)
            st.insert(arr1[i]);
        for(int j=0;j<m;j++)
            st.insert(arr2[j]);
        vector<int> v(st.begin(),st.end());
        return v;
    }
};
