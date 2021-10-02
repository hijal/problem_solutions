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
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if(a <= d and b <= d and c <= d) {
			int sum = a + b + c;

			if(sum == d or sum <= d) {
				printf("1\n");
				continue;
			} else {
				if(a + b <= d) {
					printf("2\n");
				} else if(a + c <= d) {
					printf("2\n");
				} else {
					printf("3\n");
				}
			}
			
		}
 		else {
 			printf("0\n");
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