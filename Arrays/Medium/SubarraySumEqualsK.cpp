// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2

// Constraints:

// 1 <= nums.length <= 2 * 10^4
// -1000 <= nums[i] <= 1000
// -10^7 <= k <= 1^07

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count = 0;
        mp[0] =1;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            count+=mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};
