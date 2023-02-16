class Solution {
public:
    int findPeakElement(vector<int>& arr) {
       int  n = arr.size();
       int low = 0;
       int high = n-1;
       int mid;
       int ans = 0;
       while(low<=high)
       {
           mid = low + (high - low)/2;
           if((mid == 0 || (arr[mid-1]<=arr[mid])) && (mid == n-1 || (arr[mid+1]<=arr[mid])))
                return mid;
           else if(arr[mid+1]>arr[mid])
                low = mid + 1;
           else
            high = mid - 1;
       }
       return -1;  
    }
};
