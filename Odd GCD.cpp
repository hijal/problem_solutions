#include <bits/stdc++.h>

#define pb push_back
#define MAX 1000000000
#define ll long long int

using namespace std;

int counter(int n) {
	int cnt = 0;
	while(n > 0 and n % 2 != 1) {
		cnt++;
		n = n / 2;
	}
	return cnt;
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

		int ev = 0, od = 0, big = MAX;	

		for(int i = 0; i < n; i++) {
			if(a[i] & 1) {
				od++;
			}
			else {
				big = min(big, counter(a[i]));
				ev++;
			}
		}
		if(od == 0) {
			printf("%d\n", big);
		} else {
			printf("0\n");
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