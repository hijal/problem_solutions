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
		int n, fr, ve, fi;
		cin >> n >> fr >> ve >> fi;

		int sum = fr + fi ;
		bool dishes = sum >= n and ve >= n;
		if(dishes) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
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