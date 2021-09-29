#include <bits/stdc++.h>

#define pb push_back
 
using namespace std;

void init()
{
	// int n, nod = 0;
	// cin >> n;

	// for(int i = 2; (i * i) <= n; ++i) {
	// 	int power = 0;
	// 	while(n % i == 0) {
	// 		++power;
	// 		n /= i;
	// 	}
	// 	nod = nod * (power + 1);
	// }
	// nod = nod * (1 + 1);

	long long n,num_divisors=1;
    cin>>n;
    for(long long i=2;i*i<=n;++i){
        long long power=0;
        while(n%i==0){
            ++power;
            n/=i;
        }
        num_divisors=num_divisors*(power+1);
    }
    num_divisors=num_divisors*(1+1);
    cout<<"Number of divisors = "<<num_divisors<<endl;

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