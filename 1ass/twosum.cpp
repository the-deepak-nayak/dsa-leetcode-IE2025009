class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector <int> ans;
        int a = nums.size();
        int f = 0;
        for (int i=0; i<a-1; i++)
        {
            if (f==1) break;
            for (int j=i+1; j<a; j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    f=1;
                    break;
                }
            }
        }
        return ans;
    }
};
