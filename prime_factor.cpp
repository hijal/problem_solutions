#include <bits/stdc++.h>

#define pb push_back
#define MAX 100000000
#define ll long long int

using namespace std;

bool check(ll n, ll pos) {
	return (bool)(n & (1 << pos));
}

ll Set(ll n, ll pos) {
	return n | (1 << pos);
}

int status[(MAX / 32) + 1];

vector <int> p;


void siv() {
	ll sq = int(sqrt(1e6));

	p.pb(2);

	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			for(ll j = (i * i); j <= 1e8; j += (2 * i)) {
				status[j / 32] = Set(status[j / 32], j % 32);
			}
		}
	}

	for(ll i = 3; i <= 1e6; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			p.pb(i);
		}
	}
}

void init()
{
	siv();
	while(true) {
		ll n;
		cin >> n;
		if(n == -1) 
			break;
		for(ll i = 0; i < p.size(); i++) {
			while(n % p[i] == 0) {
				n /= p[i];
				printf("    %d\n", p[i]);
			}
			if(n == 1) 
				break;

		}
		if(n != 1) {
			printf("    %lld\n", n);
		}
		printf("\n");
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