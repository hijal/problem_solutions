#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];

		for(int i = 0; i < n; i++) cin >> a[i];

		int local_max = 0, global_max = INT_MIN;

		for(int i = 0; i < n; i++) {
			local_max = max(a[i], (a[i] + local_max));

			if(local_max > global_max) {
				global_max = local_max;
			}
		}
		cout << global_max << endl;
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

//source: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1