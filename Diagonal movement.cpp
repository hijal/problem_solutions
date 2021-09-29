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
		int x, y;
		cin >> x >> y;

		ll sum = x + y;
		// printf("%lld\n", sum);
		if(sum & 1) {
			printf("NO\n");
		}
		else {
			printf("Yes\n");
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