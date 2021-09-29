#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int k;
	cin >> k;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - 1; j++) {
			if(a[j] > a[j + 1] && i != j) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	cout << a[k - 1] << '\n';

	// stl approach
	
	// set <int> st(a, a + n);
	// set <int>:: iterator it = st.begin();
	// advance(it, k - 1);
	// cout << *it << '\n';
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