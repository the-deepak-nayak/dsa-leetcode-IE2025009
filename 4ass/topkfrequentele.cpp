class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int, int> ct;
        for (int num:nums)
            ct[num]++;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fin;
        for (auto p:ct)
        {
            fin.push({p.second, p.first});
            if (fin.size()>k)
               fin.pop(); 
        }
        vector<int> freq;
        while(!fin.empty())
        {
            freq.push_back(fin.top().second);
            fin.pop();
        }
        return freq;
    }
};
