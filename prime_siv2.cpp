#include <bits/stdc++.h>
#define pb push_back
#define ll long long

#define MAX 10000007

using namespace std;

bool status [MAX];

void siv(ll n) {
	ll sq = sqrt(n);

	status[1] = true;

	for(ll i = 4; i <= n; i += 2) {
		status[i] = true;
	}

	for(ll i = 3; i <= sq; i += 2) {
		if(status[i] == false) {
			for(ll j = (i * i); j <= n; j += i) {
				status[j] = true;
			}
		}
	}
}


void init()
{

	ll n; 
	cin >> n;

	cout << ~n << endl;

	siv(n);

	if(status[n] == true) {
		cout << n << " is not prime number.\n";
	} else {
		cout << n << " is a prime number.\n";
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