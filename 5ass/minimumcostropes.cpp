class Solution {
  public:
    int minCost(vector<int>& arr)
    {
        if (arr.size()==0 || arr.size()==1)
        return 0;
        else if (arr.size()==2)
        return arr[0]+arr[1];
        
        priority_queue<int, vector<int>, greater<int>> fin;
        
        for (auto x:arr)
        {
            fin.push(x);
        }
        int sum=0;
        while (fin.size()>1)
        {
            int n1=fin.top();
            fin.pop();
            int n2=fin.top();
            fin.pop();
            int n3=n1+n2;
            sum+=n3;
            fin.push(n3);
        }
        return sum;
    }
};
