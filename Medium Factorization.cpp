#include <bits/stdc++.h>

#define pb push_back
#define MAX 5000
#define ll long long int

using namespace std;

bool status[MAX];
vector <int> prime;

void siv ()
{
    status[0] = status[1] = true;
    prime.pb(2);

    for (ll i = 4; i < MAX; i += 2) {
        status[i] = true;
    }

    for (ll i = 3; (i * i)<= MAX; i += 2) {
    	if (!status[i]) {
        	for (ll j = (i * i); j <= MAX; j += 2 * i) {
                status[j] = true;
           }
        }
    }

    for (ll i = 3; i < MAX; i += 2) {
    	if (!status[i]) {
            prime.pb(i);
        }
    }
}

void init()
{
	siv();

	int n;
	while(scanf("%d", &n) != EOF) {
		// cout << n << endl;
		vector <int> p;

		p.pb(1);
		
		for(int i = 0; (prime[i] * prime[i]) <= n; i++) {
			while((n % prime[i]) == 0) {
				// cout << prime[i] << endl;
				p.pb(prime[i]);
				n /= prime[i];
			}
			// if(n == 1) {
			// 	break;
			// }
		}
		if(n > 1) {
			p.pb(n);
		}
		int len = p.size();
		for(int i = 0; i < len; i++) {
			// cout << p[i];
			printf("%d", p[i]);
			if(i == (len - 1)) {
				printf("\n");
			} else {
				printf(" x ");
			}
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