#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;

void init()
{
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		int a[n];

		for(int i = 0; i < n; i++) cin >> a[i];

		// int l = 0;
		// int r = n;
		int ans = a[0];
		for(int i = 1; i < n; i++) {
			ans &= a[i];
		}
		cout << ans << endl;
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