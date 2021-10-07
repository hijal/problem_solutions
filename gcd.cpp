#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

int gcd(int a, int b) {
	if(a == 0) {
		return b;
	}

	return gcd(b % a, a);
}

void init()
{
	int a, b;
	cin >> a >> b;
	printf("%d\n", gcd(a, b));
	printf("%d\n", __gcd(a, b));
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