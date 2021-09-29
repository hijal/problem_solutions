#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t;
	cin >> t;
	int n = 3;
	int a[n];

	while(t--) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		if((a + b) <= d and (c <= e)) {
			printf("YES");
		} else if((a + c) <= d and (b <= e)) {
			printf("YES");
		} else if((b + c) <= d and (a <= e)) {
			printf("YES");
		} else {
			printf("NO");
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