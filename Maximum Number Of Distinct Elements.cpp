#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

bool cmp(pair<ll,ll> &a, pair<ll, ll> &b) {
	return a.second < b.second;
}

void init()
{
	int t;
	cin >> t;
	while(t--) {
		vector <pair <ll, ll>> ar;
		ll n;
		cin >> n;

		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			ar.pb(make_pair(x, i));
		}
		ll k = 0;
		sort(ar.begin(), ar.end());

		for(int i = 0; i < n; i++) {
			if(ar[i].first > k) {
				ar[i].first = k;
				k++;
			} else if(ar[i].first == k) {
				ar[i].first = k;
			}
		}
		sort(ar.begin(), ar.end(), cmp);

		for(int i = 0; i < n; i++) {
			cout << ar[i].first << ' ';
		}
		printf("\n");
	}
}
int main()
{		 
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		 
	init();
		 
	return 0;
}