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
		vector<int> v(n, 3);
		if(n % 3 == 0) {
			v[n - 1] = 1;
			v[n - 2] = 2;
		}
		for(int i = 0; i < n; i++) {
			cout << v[i];
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