#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

vector <int> prime(MAX, 1);
vector <int> add(MAX, 0);

void sieve() {
	prime[0] = 0;
	prime[1] = 0;

	for(int i = 2; i * i <= MAX; i++) {
		if(prime[i]) {
			for(int j = i * i; j <= MAX; j += i) {
				prime[j] = 0;
			}
		}
	}

	for(int i = 2; i <= MAX; i++) {
		add[i] = add[i - 1] + prime[i];
	}
}

void init()
{
	sieve();

	int t;
	// cin >> t;
	scanf("%d", &t);
	while(t--) {
		ll x, y;
		// cin >> x >> y;
		scanf("%lld %lld", &x, &y);

		if((x == 1 and y == 2) or (x == 2 and y == 3) or (x == 1 and y == 3)) {
			printf("2\n");
			continue;
		}

		ll res = y - x;
		res = res - (add[y] - add[x]);

		if(prime[x + 1]) {
			res++;
		}
		printf("%lld\n", res);
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