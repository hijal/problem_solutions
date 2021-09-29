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
		int n = 7;
		int one = 0, zero = 0;

		for(int i = 1; i <= n; i++) {
			int w; cin >> w;
			if(w == 0) {
				zero++;
			} else {
				one++;
			}
		}
		if(one > zero) printf("YES\n");
		else printf("NO\n");
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