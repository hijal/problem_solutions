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
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if(a == 7 or b == 7 or c == 7) {
	        cout << "yes\n";
	    } else {
	        cout << "No\n";
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