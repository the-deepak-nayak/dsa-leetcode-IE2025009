// User function Template for C++

class Solution {
  public:
    void maxHeapify(vector<int> &arr, int n, int i) {
        int lar=i;
        int l=2*i+1;
        int r=2*i+2;
    
        if (l<n && arr[l]>arr[lar])
            lar=l;
        if (r<n && arr[r]>arr[lar])
            lar=r;
        
        if (lar!=i) {
            swap(arr[i], arr[lar]);
            maxHeapify(arr, n, lar);
        }
    }

    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        vector<int> fin(n+m);
        for (int i=0; i<n; i++)
            fin[i]=a[i];
        for (int i=0; i<m; i++)
            fin[n+i]=b[i];
    
        for (int i = (m+n)/2 -1; i>=0;i--)
            maxHeapify(fin, n+m, i);
    
        return fin;
    }
};
