#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mx 1000000000

using namespace std;

bool check(ll n, ll pos) {
	return (bool)(n & (1 << pos));
}

ll Set(ll n, ll pos) {
	return n | (1 << pos);
}

ll status[(mx / 32)];

vector <ll> primes;

ll n = 1e9;

void siv() {
	ll sq = int(sqrt(n));

	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			for(ll j = (i * i); j < n; j += (2 * i)) {
				status[j / 32] = Set(status[j / 32], j % 32);
			}
		}
	}
	primes.pb(2);

	for(ll i = 3; i <= n; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			primes.pb(i);
		}
	} 
}

void init()
{
	siv();

	for(ll i = 0; i < primes.size(); i += 500) {
		cout << primes[i] << '\n';
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