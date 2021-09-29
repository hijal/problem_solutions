#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;

void init()
{
	int n; //= 12;
	cin >> n;
	map <int, int> primes;

	for(int i = 2; (i * i) <= n; i++) {
		int power = 0;

		while(n % i == 0) {
			++power;
			n /= i;
		}
		if(power > 0) {
			primes[i] = power;
		}
	}

	long long int sod = 1;

	primes[n]++;

	for(pair <int, int> k : primes) {
		int p=k.first;
        int a=k.second;
        
        sod=sod*(pow(p,a+1)-1)/(p-1);
	}
	cout  << sod;
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