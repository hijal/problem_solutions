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

		for(int i = 0; i < n; i++) {
			char ch;
			cin >> ch;
			if(ch == 'U') {
				cout << 'D';
			}
			if(ch == 'D') {
				cout << 'U';
			}
			if(ch == 'L') {
				cout << 'L';
			}
			if(ch == 'R') cout << 'R';
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