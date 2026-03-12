class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int fin;
        int n=nums.size();
        for (int i=1; i<n; i++)
        {
            int temp = nums[i];
            int j=i-1;
            while (j>-1 && temp<nums[j])
            {
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = temp;
        }
        fin = nums[int(n/2)];
        return fin;
    }
};
