// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    int left(int i)
    {
        return (i<<1)+1;
    }
    int right(int i)
    {
        return left(i)+1;
    }
    int parent(int i)
    {
        return i>>1;
    }
    void heapify(vector<int>& arr, int n, int i)
    {
	    int s, l, r;
	    while (1)
	    {
	    	s = i;
	    	l=left(i);
	    	r=right(i);
	    	if (l < n && arr[l] > arr[s]) s = l;
    		if (r < n && arr[r] > arr[s]) s = r;

    		if (s != i)
    		{
	    		swap(arr[i], arr[s]);
	    		i = s;
		    }
		    else return;
	    }
    }
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr)
    {
        // code here
        int n = arr.size();
	    for (int i = n/2 - 1; i > -1; i--)
		    heapify(arr, n, i);

	    for (int i = n - 1; i > 0; i--)
	    {
		    swap(arr[0], arr[i]);
		    heapify(arr, i, 0);
	    }
    }
};
