#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

int gcd(int a, int b) {
	if(a == 0) {
		return b;
	}
	return gcd(b % a, a);
}

void init()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int res = a[0];

		for(int i = 1; i <= n - 1; i++) {
			res = gcd(a[i], res);
		}
		printf("%d\n", res);
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