#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);

		ll sum = 0;

		for(int i = 0; i < n - 1; i++) {
			sum = sum + abs(a[i] - a[i + 1]);
			// cout << sum << endl;
		}
		sum += abs(a[0] - a[n - 1]);
		cout << sum << endl;
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