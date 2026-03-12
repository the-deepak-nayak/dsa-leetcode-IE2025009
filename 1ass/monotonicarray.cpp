class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        bool ans = true;
        int n = nums.size();
        int f = 0;
        for (int i=0; i<n-1; i++)
        {
            if (f==0)
            {
                if (nums[i]<nums[i+1]) f=1;
                if (nums[i]>nums[i+1]) f=-1;
            }
            if (f==1)
                if (nums[i]>nums[i+1])
                    ans = false;
            if (f==-1)
                if (nums[i]<nums[i+1])
                    ans = false;
        }
        return ans;
    }
};
