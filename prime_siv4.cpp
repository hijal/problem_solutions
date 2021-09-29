#include <bits/stdc++.h>

#define ll long long int

#define pb push_back
#define mx 100000000

using namespace std;

int status[(mx / 32) + 2];

bool check(ll n, ll pos) {
	return (bool) (n & (1 << pos));
}

ll Set(ll n, ll pos) {
	return n | (1 << pos);
}

void init()
{
	ll n = 100000000;
	ll sq = int(sqrt(n));

	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i >> 5], i & 31) == 0) {
			for(ll j = (i * i); j <= n; j += (i << 1)) {
				status[j >> 5] = Set(status[j >> 5], j & 31);
			}
		}
	}

	printf("2\n");

	for (ll i = 3; i <= n;  i += 2)
	{
		if(check(status[i >> 5], i & 31) == 0) {
			printf("%lld\n", i);
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