#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

int GCD(int a, int b) {
	if(a == 0) return b;
	return GCD(b % a, a);
}

void init()
{
	int a, b;
	cin >> a >> b;

	int gcd = GCD(a, b);
	printf("gcd = %d\n", gcd);
	int lcm = a / gcd * b;
	printf("lcm = %d\n", lcm);
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