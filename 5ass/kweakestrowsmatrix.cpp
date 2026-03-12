class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        multimap<int, int> fin;
        vector<int> out;
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0; i<m; i++)
        {
            int sum=0;
            for (int j=0; j<n; j++)
            {
                sum+=mat[i][j];
            }
            fin.insert({sum, i});
        }
        for (auto p: fin)
        {
            if (k--==0) break;
            out.push_back(p.second);
        }
        return out;
    }
};
