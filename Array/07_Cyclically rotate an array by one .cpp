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
		int n;
		cin >> n;
		int a[n];

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int temp = a[n - 1];

		for(int i = n - 1; i > 0; i--) {
			// printf("(i) = %d (i - 1) =  %d \n", i, i - 1);
			a[i] = a[i - 1];
		}

		a[0] = temp;

		for(int i = 0; i < n; i++) {
			cout << a[i] << ' ';
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

//source: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1