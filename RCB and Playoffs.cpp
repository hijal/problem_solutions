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
		int x, y, z;
		cin >> x >> y >> z;

		ll win = z * 2;
		ll draw = z * 1;
		ll besi = max(win, draw);

		if((x + besi) > y or (x + besi) == y) {
			printf("Yes\n");
		} else {
			printf("No\n");
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