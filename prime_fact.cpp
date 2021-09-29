#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;

void primeFact(long long int n) {
	while(n % 2 == 0) {
		cout << 2 << ' ';
		n /= 2;
	}
	for(int i = 3; i <= int(sqrt(n)); i += 2) {
		while(n % i == 0) {
			cout << i << ' ';
			n /= i;
		}
	}

	if(n > 2) {
		cout << n << endl;
	}
}

void init()
{
	long long int n;
	cin >> n;
	primeFact(n);
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