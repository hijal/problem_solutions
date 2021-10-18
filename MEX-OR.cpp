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
		int n;
		cin >> n;

		int res = 1;
		if(n == 0) {
			printf("1\n");
			continue;
		} else if(n == 1 or n == 2) {
			printf("2\n");
			continue;
		} else {
			while(res * 2 <= n) {
				res *= 2;
			}
			if(res == n) {
				printf("%d\n", n);
			} else if(n == ((res * 2) - 1)) {
				printf("%d\n", n + 1);
			} else {
				printf("%d\n", res);
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