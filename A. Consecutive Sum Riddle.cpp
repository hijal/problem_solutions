#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;

		if(n == 1) {
			printf("0 1\n");
			continue;
		} else {
			ll l = (n - 1);
			printf("%lld %lld\n", (l * -1) , n);
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