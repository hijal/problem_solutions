#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
using namespace std;

void op_div(ll n) {
	while(n % 2 == 0) {
		cout << 2 << ' ';
		n /= 2;
	}

	for(ll i = 3; i <= int(sqrt(n)); i += 2) {
		while(n % i == 0) {
			cout << i << ' ';
			n /= i;
		}
	}
	if(n > 2) {
		cout << n;
	}
}

void init()
{
	ll n, div = 1;

	cin >> n;
	op_div(n);
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