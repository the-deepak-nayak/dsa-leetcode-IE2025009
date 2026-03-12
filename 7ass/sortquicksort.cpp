class Solution {
public:
    int partition(vector<int>& nums, int b, int t)
    {
        if (b>=t)
            return -1;
        int p = b, l=p+1, r=t;
        while (l<=r)
        {
            if (nums[l]<nums[p])
                l++;
            else if (nums[r]>=nums[p])
                r--;
            else swap(nums[l], nums[r]);
        }
        swap(nums[p], nums[r]);
        return r;
    }
    void quickSort (vector<int>& nums, int p, int r)
    {
        if (p<r)
        {
            int q = partition(nums, p, r);
            quickSort(nums, p, q);
            quickSort(nums, q+1, r);
        }
        else return;
    }
    vector<int> sortArray(vector<int>& nums) 
    {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};
