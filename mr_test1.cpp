#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

using u64 = uint64_t;
using u128 = __uint128_t;

vector <int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

u64 binpower(u64 base, u64 exp, u64 mod) {
	u64 res = 1;
	base %= mod;

	while(exp > 0) {
		if(exp & 1) {
			res =  (u128) res * base % mod;
		}
		base = (u128) base * base % mod;
		exp >>= 1;
	}
	return res;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
	u64 x = binpower(a, d, n);
	if(x == 1 or x == (n - 1)) 
		return false;

	for(int r = 1; r < s; r++) {
		x = (u128) x * x % n;

		if(x == (n - 1)){
			return false;
		}
	}
	return true;
}

bool mr_test(u64 n) {
	if(n < 2) 
		return false;

	int r = 0;
	u64 d = n - 1;

	while((d & 1) == 0) {
		d >>= 1;
		r++;
	}

	for(int prime : primes) {
		if(n == prime) {
			return true;
		}

		if(check_composite(n, prime, d, r)) {
			return false;
		}
	}
	return true;
}


void init()
{
	u64 n;
	cin >> n;
	cout << mr_test(n);
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