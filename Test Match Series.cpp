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
	    int ind = 0, eng = 0;
	    
	    for(int i = 0; i < 5; i++) {
	        int a;
	        cin >> a;
	        
	        if(a == 0) continue;
	        if(a == 1) ind++;
	        if(a == 2) eng++;
	    }
	    
	    if(ind == eng) {
	         cout << "DRAW\n";
	    } else if(ind > eng) {
	        cout << "INDIA\n";
	    } else {
	        cout << "ENGLAND\n";
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