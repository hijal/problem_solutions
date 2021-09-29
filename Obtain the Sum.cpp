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
		ll n;
		ll s;
		cin >> n >> s;

		if(n < 2) {
			cout << -1 << endl;
			continue;
		} else {
			ll nth = n * (n + 1) / 2;

			nth = nth - s;

			if(nth >= 1 and nth <= n) {
				cout << nth << '\n';
			} else {
				cout << -1 << '\n';
			}
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