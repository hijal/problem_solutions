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
		int x, y;
		cin >> x >> y;
		string s;
		cin >> s;

		int len = s.size();
		
		int mxs = INT_MIN, t = 0;
		int pres = 0;

		for(int i = 0; i < len; i++) {
			if(s[i] == '1') {
				pres++;
				t++;
			} else {
				mxs = max(mxs, t);
				t = 0;
			}
		}
		mxs = max(mxs, t);
		ll res = pres * x + y * mxs;
		printf("%lld\n", res);
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