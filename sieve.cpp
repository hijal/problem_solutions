#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

char prime[MAX];

// void primeGenerator(ll n)
// {
// 	ll sq = int(sqrt(n));

// 	prime[0] = prime[1] = 1;

// 	for(ll i = 2; i <= sq; i++) {
// 		if(prime[i] == 0) {
// 			for(ll j = (i * i); j <= n; j += i) {
// 				prime[j] = 0;
// 			}
// 		}
// 	}
// 	return;
// }

void primeGenerator2(ll n) {
	ll sq = int(sqrt(n));

	prime[0] = prime[1] = 1; // 0 and 1 are not prime.

	for(ll i = 4; i <= n; i += 2) {
		prime[i] = 1;
	}

	for(ll i = 3; i <= sq; i += 2) {
		if(prime[i] == 0) {
			for(ll j = i * i; j <= n; j += i) {
				prime[j] = 1;
			}
		}
	}
	return;
}

void init()
{
	ll n; 
	cin >> n;

	primeGenerator2(n);

	// for()
	if(prime[n] == 0) {
		cout << "prime";
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