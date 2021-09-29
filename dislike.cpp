#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;

void init()
{
	int t; cin >> t;
	while(t--) {
		int k;
		cin >> k;
		int ind = 0;
		vector <int> v;
		
		while(v.size() <= k) {
			
			++ind;
			if(ind % 3 != 0 and ind % 10 != 3) {
				v.pb(ind);
			}
		}
		cout << v[k - 1];

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