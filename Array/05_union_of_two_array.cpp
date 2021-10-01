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

		set <int> st;

		for(int i = 0; i < (n + m); i++) {
			int item;
			cin >> item;
			st.insert(item);
		}

		cout << st.size() << '\n';
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