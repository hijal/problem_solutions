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

		string s;
		cin >> s;
		bool result = false;

		if(n <= 1) {
			cout << -1 << ' ' << -1 << '\n';
			result = true;
		} else {
			for(int i = 0; i < n - 1; i++) {
				if(s[i] != s[i + 1]) {
					cout << i + 1 << ' ' << i + 2 << '\n';
					result = true;
					break;
				}
			}
			if(result == false) {
				cout << -1 << ' ' << -1 << '\n';
			}
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