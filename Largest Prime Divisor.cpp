#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

bool check(ll n, ll pos) {
	return (bool)(n & (1 << pos));
}

ll Set(ll n, ll pos) {
	return n | (1 << pos);
}

vector <int> prime;
set <int> lg;

ll status[(MAX / 32) + 1];

void siv() {
	ll sq = int(sqrt(1e6));

	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			for(ll j = (i * i); j <= 1e7; j += (2 * i)) {
				status[j / 32] = Set(status[j / 32], j % 32);
			}
		}
	}
	prime.pb(2);
	for(ll i = 3; i < 1e6; i++) {
		if(check(status[i / 32], i / 32) == 0) {
			prime.pb(i);
		}
	}
}

void init()
{
	siv();

	ll n;

	while(cin >> n && n) {
		if(n < 0) {
			n = abs(n);
		}
		if(status[n] == 0  or n <= 1) {
			cout << -1 << endl;
		}
		else {
			ll sq = sqrt(n);
			ll mx = 0;
			ll N = n;
			for(ll i = 0; prime[i] <= sq && N > 1; i++) {
				while(N % prime[i] == 0) {
					N /= prime[i];
					mx = prime[i];
				}
			}
			cout << mx << '\n';
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