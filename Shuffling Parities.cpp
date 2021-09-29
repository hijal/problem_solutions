#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		vector <int> vv;

		int n;
		scanf("%d", &n);
		int a[n];

		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		vv.pb((a[0] + a[n - 1]));

		for(int i = 0; i < n - 1; i++) {
			vv.pb((a[i] + a[i + 1]));
		}
		for(int i = 0; i < vv.size(); i++) {
			cout << vv[i] << endl;
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