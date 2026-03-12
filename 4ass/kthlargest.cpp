class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        priority_queue<int, vector<int>, greater<int>> fin;
        for(int num : nums)
        {
            fin.push(num);
            if (fin.size() > k)
                fin.pop();
        }
        return fin.top();
    }
}
