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

		int j = 0;
		for(int i = 0; i < n; i++) {
			if(i != j and a[i] < 0) {
				swap(a[i], a[j]);
				j++;
			}
		}

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