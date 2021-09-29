#include <bits/stdc++.h>

#define pb push_back
#define ll long long int
#define mx 1000000

using namespace std;

bool check(ll n, ll pos) {
	return (bool)(n & (1 << pos));
}

ll Set(ll n, ll pos) {
	return n | (1 << pos);
}

ll status[(mx / 32) + 1];

vector<int> primes;

int siv(ll n) {
	primes.clear();
	if(n >= 2) primes.pb(2);

	ll sq = int(sqrt(n));

	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i >> 5], i & 31) == 0) {
			for(ll j = (i * i); j <= n; j += (i << 1)){
				status[j >> 5] = Set(status[j >> 5], j & 31);
			}
		}
	}

	for(ll i = 3; i <= n; i += 2) {
		if(check(status[i >> 5], i & 31) == 0) {
			primes.pb(i);
		}
	}
	return primes.size();
}

void init()
{
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		cout << siv(n) << '\n';
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