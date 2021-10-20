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
		int n, x, p;
		cin >> n >> x >> p;

		int pen = n - x;
		int cor = x * 3;

		int res = cor - pen;
		// printf("%d\n", res);

		if(res >= p) printf("PASS\n");
		else printf("FAIL\n");
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