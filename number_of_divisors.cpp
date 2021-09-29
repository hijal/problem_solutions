#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

bool status[MAX];

vector<int> prime;

void siv() { 
	int sq = int(sqrt(MAX));

	for(int i = 3; i <= sq; i += 2) {
		if(status[i] == 0) {
			for(ll j = (i * i); j <= MAX; j += (2* i)) {
				status[j] = 1;
			}
		}
	}
	prime.pb(2);

	for(int i = 3; i <= MAX; i += 2) {
		if(status[i] == 0) {
			prime.pb(i);
		}
	}
}

void init()
{
	siv();

	int t;
	scanf("%d", &t);

	while(t--) {
		ll n;
		scanf("%lld", &n);

		int r = 1, s = 0;

		for(int i = 0; i <= prime.size() && prime[i] * prime[i] <= n; i++) {
			int cnt = 0;

			if(n % prime[i] == 0) {
				while(n % prime[i] == 0) {
					cnt++;

					n /= prime[i];
				}
				s = cnt + 1;
				r = s * r;
			}
		}
		if(n != 1) {
			r *= 2;
		}
		printf("%d\n", r);
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