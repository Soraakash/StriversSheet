// Given an unsorted array Arr[] of N integers and an integer X, find floor and ceiling of X in Arr[0..N-1].

// Floor of X is the largest element which is smaller than or equal to X. Floor of X doesn’t exist if X is smaller than smallest element of Arr[].

// Ceil of X is the smallest element which is greater than or equal to X. Ceil of X doesn’t exist if X is greater than greatest element of Arr[].

// Example 1:

// Input:
// N = 8, X = 7
// Arr[] = {5, 6, 8, 9, 6, 5, 5, 6}
// Output: 6 8
// Explanation:
// Floor of 7 is 6 and ceil of 7 
// is 8.

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int ,int> p;
    p.first=-1;
    p.second=-1;
    int low=0, high = n-1;
    sort(arr,arr+n);
    while(low<=high)
    {
        int mid =(low+ high)/2;
        if(arr[mid]==x){
            p.first=x;
            p.second=x;
            return p;
        }
            else if(arr[mid]< x)
            {
                p.first=arr[mid];
                low=mid+1;
            }
            else{
                p.second =arr[mid];
                high=mid-1;
            }
        }
        return p;
}
