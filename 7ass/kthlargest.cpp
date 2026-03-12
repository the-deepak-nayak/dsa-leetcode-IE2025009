class Solution {
public:
    int quickSelect(vector<int> &nums, int left, int right, int i)
    {
        if (left==right)
        {
            return nums[left];
        }

        int pivot=nums[left];
        int low=left;
        int high=right;

        while (low<=high)
        {
            while (low<=high && nums[low]<pivot)
            {
                low++;
            }
            while (low<=high && nums[high]>pivot)
            {
                high--;
            }
            if (low<=high)
            {
                swap(nums[low], nums[high]);
                low++;
                high--;
            }
        }

        if (i<=high)
        {
            return quickSelect(nums, left, high, i);
        } 
        else if (i>=low)
        {
            return quickSelect(nums, low, right, i);
        }
        else
        {
            return nums[i];
        }
    }
    int findKthLargest(vector<int> &nums, int k)
    {
        int i = nums.size() - k;
        return quickSelect(nums, 0, nums.size() - 1, i);
    }
};
