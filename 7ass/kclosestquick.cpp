class Solution {
public:
    int quick_select(vector<int> &lst, int k)
    {
        int left=0, right=lst.size()-1;

        while (true)
        {
            int pivot=lst[right];
            int i=left;

            for (int j=left; j<right; j++)
            {
                if (lst[j]<=pivot)
                {
                    swap(lst[i], lst[j]);
                    i++;
                }
            }

            swap(lst[i], lst[right]);

            if (i==k-1)
                return lst[i];
            else if (i>k-1)
                right=i-1;
            else
                left=i+1;
        }
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<int> distance;

        for (auto &pt:points) {
            distance.push_back(pt[0]*pt[0] + pt[1]*pt[1]);
        }

        int kth=quick_select(distance, k);

        vector<vector<int>> res;

        for (int i=0; i<points.size(); i++) {
            int d=points[i][0]*points[i][0] + points[i][1]*points[i][1];
            if (d<=kth) {
                res.push_back(points[i]);
            }
        }

        return res;
    }
};

