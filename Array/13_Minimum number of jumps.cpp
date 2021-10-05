#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

int jumpToEnd(int a[], int n) {
	if(n <= 1) return 0;

	if(a[0] == 0) return -1;

	int mx = a[0], steps = a[0], res = 1;

	for(int i = 1; i < n; i++) {
		if(i == (n - 1)) {
			return res;
		}

		mx = max(mx, (i + a[i]));

		steps--;

		if(steps == 0) {
			res++;
			if(i >= mx) {
				return -1;
			}
			steps = mx - i;
		}
	}
	return -1;
}

void init()
{
	int t;
	cin >> t;
	while(t--) {
		int n; 
		cin >> n;
		int a[n];

		if(n == 1) {
			printf("0\n");
			continue;
		}

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		cout << jumpToEnd(a, n) << '\n';
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