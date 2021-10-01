#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int mx = a[0];
	int mn = a[1];

	for(int i = 0; i < n; i++) {
		if(a[i] > mx) {
			mx = a[i];
		}
		if(a[i] < mn) {
			mn = a[i];
		}
	}
	cout << "max : " << mx << '\n';
	cout << "min : " << mn << '\n';
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

//Source: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/