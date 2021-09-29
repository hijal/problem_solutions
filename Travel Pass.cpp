#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, a , b;
		scanf("%d %d %d", &n, &a, &b);

		int zero = 0, one = 0;
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '0') zero++;
			if(s[i] == '1') one++;
		}
		int res = (a * zero) + (b * one);
		printf("%d\n", res);
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