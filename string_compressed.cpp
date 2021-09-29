#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;
 
void init()
{
	int t;
	cin >> t;
	while(t--) {
		map < string, int > mp;
		int edge, assign = 0;
		cin >> edge;

		for(int i = 0; i < edge; i++) {
			string s1, s2;
			cin >> s1 >> s2;

			if(mp.find(s1) == mp.end()) {
				mp[s1] = assign++;
			}

			if(mp.find(s2) == mp.end()) {
				mp[s2] = assign++;
			}

			int u = mp[s1];
			int v = mp[s2];

			cout << "Edge: " << u << " " << v << endl;
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