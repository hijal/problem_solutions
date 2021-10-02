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
		int a, b; cin >> a >> b;

		if(a > 0 and b > 0) {
			printf("Solution\n");
		} else if(a == 0 and b > 0) {
			printf("Liquid\n");
		} else {
			printf("Solid\n");
		}
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