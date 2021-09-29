#include <bits/stdc++.h>

using namespace std;

int n = 1e8;

int prime[100000];

vector<int> v;

int status[1000000000 / 32];

bool check (int n, int pos) {
	return (bool) (n & (1 << pos));
}

int SET(int n, int pos) {
	return n = n | (1 << pos);
}

void siv (int n) {
	int sq = int(sqrt(n));

	for(int i = 3; i <= sq; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			for(long long int j = (i * i); j <= n; j += 2 * i) {
				status[j / 32] = SET(status[j / 32], j % 32);
			}
		}
	}
	v.push_back(2);
	for(int i = 3; i <= n; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			v.push_back(i);
		}
	}
}

void init()
{
	siv(n);
	int tt = 12;
	int s = 0;
	for(int i = 0; i < v.size(); i += 1) {
		cout << v[i] << '\n';
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