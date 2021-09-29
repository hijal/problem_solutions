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
		int n , s;
		cin >> n >> s;

		if(n % 2 == 0) {
			int ev = (n / 2) + 1;
			cout << int(s / ev) << endl;
		} else {
			int od = (n + 1) / 2;
			cout << int(s / od) << endl;
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