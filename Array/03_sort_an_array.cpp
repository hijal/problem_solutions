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
		int a[n];

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a, a + n);

		for(int i = 0; i < n; i++) {
			cout << a[i] << ' ';
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

//source: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/