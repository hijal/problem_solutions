#include <bits/stdc++.h>

#define pb push_back
#define MAX 3123
#define ll long long int

using namespace std;
 
int primes[MAX];

void siv()
{
	for(int i=2;i<3000;i++) {
		primes[i]=1;
	}
	for(int i=2;i<3000;i++)
	{
		if(primes[i])
		{
			for(int j=i*2;j<3000;j+=i)
				primes[j]=0;
		}
	}
}


void init()
{
	siv();

	int n;
	cin >> n;
	int res = 0;

	for(int i = 2; i <= n; i++) {
		if(primes[i]) {
			continue;
		}
		int cnt = 0;
		int N = i;
		for(int j = 2; j < i; j++)
		{
			if(primes[j] and (N % j) == 0) {
				while(N and (N % j) == 0)
			    {
			        N /= j;
			    }
			    cnt++;
			}
		}
		if(cnt == 2) {
	        res++;
		} 
	}
	cout << res << endl;

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