#include <bits/stdc++.h>

#define pb push_back
#define MAX 2000000
#define ll long long int

using namespace std;


bool check(ll n, ll pos) {
	return (bool)(n & (1 << pos));
}

ll Set(ll n, ll pos) {
	return n | (1 << pos);
}

int status[(MAX / 32) + 1];
ll N = 1000000;

vector<int> primes;

void siv() {
	ll sq = int(sqrt(N));
	primes.pb(2);

	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			for(ll j = i * i; j <= N; j += 2 * i){
				status[j / 32] = Set(status[j / 32], j % 32);
			}
		}
	}

	for(ll i = 3; i <= N; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			primes.pb(i);
		}
	}
}


int isPrime(int n) {
	if(n <= 1) return 0;

	for(int i = 2; (i * i) <= n; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void solve(int n) {
	for(int i = 2; i < (n / 2) + 1; i++) {
		if(isPrime(i) and isPrime(n - i)) {
			cout << n <<" = " << i <<" + "<< n-i <<"\n";
			break;
		}
	}
}

void init()
{
	// siv();

	while(true) {
		ll n;
		scanf("%lld", &n);

		if(n == 0) {
			break;
		}
		if(n < 6) {
			printf("Goldbach's conjecture is wrong.\n");
			continue;
		}

		solve(n);
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