#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n, k;
	cin>>n>>k;
	vector<ll> arr(n);
	for (ll i=0; i<n; i++)
		cin>>arr[i];
	vector<vector<ll>> weight(k);
	for (ll i=0; i<n; i++)
	{
		ll p = arr[i]%k;
		weight[p].push_back(arr[i]);
	}
	for (vector<ll> &i:weight)
	{
		if (i.size()==0) continue;
		ll p = i.size();
		vector<ll> fin(p);
		ll m = i[0];
		for (ll j=0; j<p; j++)
			if (i[j]>m)
				m = i[j];
		vector<ll> cnta(m+1);
		for (ll j=0; j<p; j++)
			cnta[i[j]]++;
		for (ll j=1; j<=m; j++)
			cnta[j]+=cnta[j-1];
		for (ll j=0; j<p; j++)
		{
			fin[cnta[i[j]]-1] = i[j];
			cnta[i[j]]--;
		}
		for(ll j=0; j<p; j++)
			i[j] = fin[j];
	}
	for (ll i=k-1; i>=0; i--)
	{
		ll p = weight[i].size();
		for (ll j=0; j<p; j++)
			cout<<weight[i][j]<<" ";
	}
	return 0;
}
