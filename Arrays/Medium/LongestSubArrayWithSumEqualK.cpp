// Given an array containing N integers and an integer K., Your task is to find the length of 
// the longest Sub-Array with the sum of the elements equal to the given value K.

// Example 1:
 
// Input :
// A[] = {10, 5, 2, 7, 1, 9}
// K = 15
// Output : 4
// Explanation:
// The sub-array is {5, 2, 7, 1}.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1<=N<=10^5
// -10^5<=A[i], K<=10^5

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
       unordered_map <int,int> map;
        int currSum = 0, ans = 0;
        for(int i = 0; i < N; i++){
            currSum += A[i];
            
            if(currSum == k){
                ans = max(ans,i-0+1);
            }
            
            if(map.find(currSum - k) != map.end()){
                ans = max(ans,i-map[currSum-k]);
            }
            
            if(map.find(currSum) == map.end()){
                map[currSum] = i;
            }
        }
        return ans;
    } 
