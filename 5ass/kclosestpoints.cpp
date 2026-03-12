class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        vector<vector<int>> out;
        multimap<int, vector<int>> fin;
        for (auto i : points)
        {
            fin.insert({i[0]*i[0] + i[1]*i[1], i});
        }
        for (auto p: fin)
        {
            if (k==0) break;
            out.push_back(p.second);
            k--;
        }
        return out;
    }
};
