#include <bits/stdc++.h>

#define pb push_back
#define ll long long int 

using namespace std;


bool check(ll n, ll pos) {
	return (bool)( n & (1 << pos));
}

ll Set(ll n, ll pos) {
	return n | (1 << pos);
}

void init()
{
	ll n = 100, prime[100];
	ll status[100 / 32];

	ll sq = int(sqrt(100));

	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			for(ll j = (i * i); j <= n; j += (2 * i)) {
				status[j / 32] = Set(status[j / 32], j % 32);
			}
		}
	}
	printf("2\n");

	for(ll i = 3; i <= n; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
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