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

		string st = s;

		int cnt = 0;

		sort(s.begin(), s.end());

		for(int i = 0; i < n; i++) {
			cnt += (s[i] != st[i]);
		}

		cout << cnt << endl;
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