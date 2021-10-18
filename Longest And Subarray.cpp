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
		int N = n;

		int ans = 0;

		while(n > 0) {
			ans++;
			n /= 2;
		}
		// cout << n << endl;
		int res1 = N - pow(2, ans - 1) + 1;
		int res2 = pow(2, ans - 1) - pow(2, ans - 2);
		cout << max(res1, res2) << '\n';
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