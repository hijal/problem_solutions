#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void preLoad() {

}

void init()
{
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		
		for(int i=0;i<32;i++){
        if(s[i]=='1'){
            ans = (ans + binpow(n,i))%MOD;
        }   
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