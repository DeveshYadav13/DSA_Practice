class Solution {
public:
    void countSort(vector<int>&arr, int exp)
    {
        int n = arr.size();
        int output[n];
        int i, count[10] = { 0 };

        for (i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;

        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        
        for (i = 0; i < n; i++)
            arr[i] = output[i];
    }

    void radixsort(vector<int>&arr)
    {
        int n = arr.size();

        int m = *max_element(arr.begin(),arr.end());

        for (int exp = 1; m / exp > 0; exp *= 10)
            countSort(arr, exp);
    }

    
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        radixsort(nums);
        
        int mx = 0;
        for(int i = 0; i<n-1; i++){
            mx = max(mx,nums[i+1]-nums[i]);
        }
        return mx;
    }
};