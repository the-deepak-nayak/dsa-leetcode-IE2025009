class Solution {
public:
    void merge(vector<int> &a, int l, int m, int r)
    {
        int n1 = m-l+1;
        int n2 = r-m;

        vector<int> L(n1), R(n2);

        for (int i=0; i<n1; i++)
            L[i] = a[l+i];
        for (int i=0; i<n2; i++)
            R[i] = a[m+1+i];
        int i=0, j=0;
        int k = l;

        while (i<n1 && j<n2)
        {
            if (L[i]<=R[j])
            {
                a[k] = L[i];
                i++;
            }
            else
            {
                a[k] = R[j];
                j++;
            }
            k++;
        }

        while (i<n1)
        {
            a[k] = L[i];
            i++; k++;
        }

        while (j<n2)
        {
            a[k] = R[j];
            j++; k++;
        }
    }

    void mergesort(vector<int> &a, int left, int ryt)
    {
        if (left>=ryt) return;

        int mid = left + (ryt-left)/2;
        mergesort(a, left, mid);
        mergesort(a, mid+1, ryt);
        merge(a, left, mid, ryt);
    }
    vector<int> sortArray(vector<int> &a)
    {
        int n = a.size();
        mergesort(a, 0, n-1);
        return a;
    }
};
