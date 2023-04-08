// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

// Example 1:

// Input: nums = [3,2,3]
// Output: [3]

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1 = INT_MIN, n2 = INT_MIN;
        int count1 = 0;
        int count2 = 0;
        int  n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] == n1)
                count1++;
            else if(nums[i] == n2)
                count2++;
            else if(count1 == 0)
            {
                n1 = nums[i];
                count1++;
            }
            else if(count2 == 0)
            {
                n2 = nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }vector < int > ans;
        int c1=0;
        int c2 = 0;
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] == n1)
                c1++;
            else if (nums[i] == n2)
                c2++;
        }
        if (c1 > n / 3)
    ans.push_back(n1);
        if (c2 > n / 3)
    ans.push_back(n2);
        return ans;

    }
};
