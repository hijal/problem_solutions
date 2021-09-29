#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;
 
void init()
{
	int t;
	cin >> t;
	while(t--) {
		int n, k , m;
		cin >> n >> k >> m;
		int a[n];
		vector <int> v;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		

		for(int j = 0; j < n; j++) {
			long long int s = 0;
			for(int i = j; i < k; i++) {
				s += a[i];
			}
			cout << s << ' ';
			v.push_back(s);
		}
		// cout << v.size();
		sort(v.begin(), v.end());

		for(int i = 0; i < v.size(); i++) {
			// cout << v[i] << ' ';
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