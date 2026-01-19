class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> L(m), R(n);

        for (int i=0; i<m; i++)
            L[i] = nums1[i];
        for (int i=0; i<n; i++)
            R[i] = nums2[i];
        int i=0, j=0;
        int k = 0;

        while (i<m && j<n)
        {
            if (L[i]<=R[j])
            {
                nums1[k] = L[i];
                i++;
            }
            else
            {
                nums1[k] = R[j];
                j++;
            }
            k++;
        }

        while (i<m)
        {
            nums1[k] = L[i];
            i++; k++;
        }

        while (j<n)
        {
            nums1[k] = R[j];
            j++; k++;
        }
    }
};
