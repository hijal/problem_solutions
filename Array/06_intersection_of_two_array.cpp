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
		int n, m;
		cin >> n >> m;

		set <int> st, fd;

		for(int i = 0; i < n; i++) {
			int a;
			cin >> a;
			st.insert(a);
		}

		for(int i = 0; i < m; i++) {
			int b;
			cin >> b;

			if(st.find(b) != st.end()) {
				fd.insert(b);
			}
		}
		if(fd.size() == 0) {
			cout << "No";
		} else {
			cout << "Yes\n";
			for(auto it = fd.begin(); it != fd.end(); it++) {
				cout << *it << ' ';
			}
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

//source: https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1