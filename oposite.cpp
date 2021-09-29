#include <bits/stdc++.h>

#define pb push_back
#define ll long long int
 
using namespace std;

void init()
{
	ll t; cin >> t;
	while(t--) {
		ll a, b, c; cin >> a >> b >> c;
		ll output = 0;
		ll ps = 2 * abs(b - a);	

		if(ps < a or ps < b or ps < c) {
			output -= 1;
		} else {
			output = c + (ps / 2);
			if(output > ps) {
				output = c - (ps / 2);
			}
		}
		printf("%lld\n", output);
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