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
		int d, l, r;
		cin >> d >> l >> r;

		if(d >= l and d <= r) {
			cout << "Take second dose now\n";
		} else if(d >= l and d >= r) {
			cout << "Too Late\n";
		} else {
			cout << "Too Early\n";
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