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
		int n, k = 0;
		cin >> n;
		int op = n;
		int cl = n;

		for(int i = 1; i <= n; i++) {
			for(int j = op; j > 0; j--) {
				for(int p = 1; p <= i; p++) {
					cout << "(";
					j--;
				}
				cl--;
			}
			// cl--;
		}
		cout << cl << endl;
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