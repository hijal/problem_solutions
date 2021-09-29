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

		if(n % 2 == 0) {
			vector< vector<int>> vec(n, vector<int> (n, -1));
			
			// int sm = 0, pd = 0;
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					cout << vec[i][j] << ' ';
				}
				printf("\n");
			}
		} else {
			vector< vector<int>> vec(n, vector<int> (n, 1));
			int td = 0;

			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					if(i == j) {
						vec[i][j] = -1;
					}
				}
			}

			// for(int i = 0; i < n; i++) {
			// 	vec[i][td++] = -1;
			// }
			// int sm = 0, pd = 0;
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					cout << vec[i][j] << ' ';
				}
				printf("\n");
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