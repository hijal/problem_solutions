#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;
 
bool status[10848603 + 1];

void siv(long long int n) {
	long long sq = sqrt(n);

	status[1] = 1;

	for(long long i = 4; i <= n; i += 2) {
		status[i] = 1;
	}

	for(long long i = 3; i <= sq; i += 2) {
		if(status[i] == 0) {
			for(long long j = (i * i); j <= n; j += i) {
				status[j] = 1;
			}
		}
	}
}

void init()
{
	long long n;
	cin >> n;
	siv(n);

	if(status[n] == true) {
		cout << "not prime";
	} else {
		cout << "prime";
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