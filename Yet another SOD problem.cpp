#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t, mod = 3;
	cin >> t;
	while(t--) {
		ll l, r;
		cin >> l >> r;
		if(l % mod == 0) {
			cout << (r / mod) - (l / mod) + 1 << '\n';
		} else {
			cout << (r / mod) - (l / mod) << '\n';
		}
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