class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> fin;
        map<int, int> ext;
        int n = nums1.size();
        int m = nums2.size();
        for (int i=0; i<n; i++)
        {
            ext[nums1[i]]++;
        }
        for (int i=0; i<m; i++)
        {
            if (ext.count(nums2[i])==1)
            {
                fin.push_back(nums2[i]);
                ext[nums2[i]]=0;
            }
        }
        return fin;
   }
};
