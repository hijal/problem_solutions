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
		int n, m;
		cin >> n >> m;

		int a[n], b[m];

		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];

		int j = 0, i = n - 1;

		while(i >= 0 and j < m) {
			if(a[i] > b[j]) {
				swap(a[i], b[j]);
				i--;
				j++;
			} else {
				break;
			}
		}
		sort(a, a + n);
		sort(b, b + m);

		for(int i = 0; i < n; i++) cout <<  a[i] << " ";
		for(int i = 0; i < m; i++) cout << b[i] << " ";
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

//source: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#