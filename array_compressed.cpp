#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;
 
void init()
{
	int n;
	cin >> n;

	int a[n];
	map <int, int> mp;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int assign = 0, compressed[100], c = 0;

	sort(a, a + n);

	for(int i = 0; i < n; i++) {
		int x = a[i];
		if(mp.find(x) == mp.end()) {
			mp[x] = assign++;
		}
		x = mp[x];
		compressed[c++] = x;
	}

	printf("compressed array\n");
	for(int i = 0; i < n; i++) {
		cout << compressed[i] << ' ';
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