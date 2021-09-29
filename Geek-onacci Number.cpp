#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;

 
void init()
{
	int t; cin >> t;
	while(t--) {
		int a, b, c, n;
		cin >> a >> b >> c >> n;

		vector <int> v;

		v.insert(v.begin(), a);
		v.insert(v.begin() + 1, b);
		v.insert(v.begin() + 2, c);

		for(int i = 3; i < n; i++) {
			v.insert(v.begin() + i, (v[i - 1] + v[i - 2] + v[i - 3]));
		}
		cout << v[n - 1] << "\n";
		v.clear();
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