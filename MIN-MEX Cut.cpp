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
		string s;
		cin >> s;

		int cnt = 0, pp = 0;
      	for(int i = 0; i < s.size(); i++) {
	        if (s[i] == '0') {
	        	cnt = 1;
	        }
	        else if (s[i] != '0' and cnt == 1) {
	            pp++; 
	            cnt = 0;
	        }
      	}
      	if (s[s.size() - 1] == '0') {
      		pp++;
      	}
      	cout << max(pp, 2) << endl;
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