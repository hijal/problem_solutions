#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t; cin >> t;
	while(t--) {
		int k, n;
		cin >> k >> n;
		if(n == 1) {
			cout << 0 << '\n';
			continue;
		}

		int a[n];

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a, a + n);

		int res = a[n - 1] - a[0];

		for(int i = 1; i < n; i++) {
			if(a[i] < k) continue;

			int choto = min(a[0] + k, a[i] - k);
			int boro = max(a[n - 1] - k, a[i - 1] + k);
			res = min(res, (boro - choto));
		}
		cout << res << endl;
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

//source: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1