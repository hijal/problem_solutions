#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;

void init()
{
	int n, number_of_divisor = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			++number_of_divisor;
		}
	}
	cout << number_of_divisor;
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