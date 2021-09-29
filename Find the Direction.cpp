#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;


const char *dir[4] = { "North", "East", "South", "West" };


void init()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		int res = n % 4;
		cout << dir[res] << endl;
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