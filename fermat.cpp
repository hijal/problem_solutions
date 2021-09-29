#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

bool isPrime(ll n) {
	if(n == 2) return true;
	if(n % 2 == 0) return false;

	ll sq = int(sqrt(n));

	for(ll i = 3; i <= sq; i += 2) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

ll binpower(ll a, ll b, ll m) {
	a %= m;
	ll res = 1;

	while(b > 0) {
		if(b & 1) {
			res = res * a % m;
		}
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

bool probabilityTest(ll n, ll it) {
	if(n < 4) {
		return n == 2 || n == 3;
	}

	for(ll i = 0; i < it; i++) {
		ll a = 2 + rand() % (n - 3);
		if(binpower(a, n - 1, n) != 1) {
			return false;
		}
	}
	return true;
}

void init()
{
	ll n;
	cin >> n;
	cout << probabilityTest(n, 5);
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