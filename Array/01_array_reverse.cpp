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
	
	int start = 0, end = n - 1;

	while(start < end) {
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}

	for(int i = 0; i < n; i++) {
		cout << a[i] << ' ';
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