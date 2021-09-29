#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

ll status[MAX];

vector <ll> prime;

void siv() {
	status[0] = 1; 
	status[1] = 1;
	
	ll sq = int(sqrt(MAX));

	for(ll i = 3; i <= sq; i += 2)
	{
		if(status[i] == 0) {
			for(ll j = (i * i); j < MAX; j += i) {
				status[j] = 1;
			}
		}
	}
	ll cnt = 0;
	prime.pb(2);// = 2;

	for(ll i = 3; i <= MAX; i += 2) {
		if(status[i] == 0) {
			prime.pb(i);
		}
	}
}

void init()
{
	siv();
	ll n, N, mx, range;
	while(cin >> n and n) {
		if(n < 0) {
			n = abs(n);
		}
		if(status[n] == 0) {
			cout << -1 << endl;
		} else {
			range = (sqrt(n));
			mx = -1;
			N = n;

			for(ll i = 0; prime[i] <= range && N > 1; i++)
            {
                while(N % prime[i] == 0)
                {
                    N /= prime[i];
                    mx = prime[i];
                }

            }
            cout << mx << endl;
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