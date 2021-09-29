#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

vector < ll > s, sg, segment;
ll p[MAX], k = 1, size;
bool a[MAX];


void prime() {
	a[0] = a[1] = 1;

	for(ll i = 4; i < MAX; i += 2) {
		a[i] = 1;
	}

	for(ll i = 3; i <= int(sqrt(MAX)); i += 2) {

		for(ll j = (i * i); j <= MAX; j += (2 * i)) {
			a[j] = 1;
		}
	}

	p[0] = 2;

	for(ll i = 3; i < MAX; i += 2) {
		if(a[i] == 0) {
			p[k++] = i;
		}
	}
}

void segment_siv(ll l, ll u) {
	sg.clear();

	ll root = sqrt(u) + 1;

	for(ll i = l; i <= u; i++) {
		sg.pb(i);
	}



	if(l == 0) {
		sg[1] = 0;
	}
	if(l == 1) {
		sg[0] = 0;
	}
	
	ll si = 0, start = 0;

	for(ll i = 0; p[i] <= root; i++) {
		si = p[i];
		start = p[i] * p[i];

		if(start < l) {
			start = ((l + si - 1) / si) * si;
		}

		for(ll j = start; j <= u; j += si) {
			sg[j - l] = 0;
		}
	}
}

void init()
{
	prime();
	int t, tc = 0;
	scanf("%d", &t);
	while(t--) {
		ll l, u;
		++tc;
		scanf("%lld %lld", &l, &u);
		segment_siv(l, u);
	
		for(ll i = l; i <= u; i++) {
			if(sg[i - l] != 0) {
				segment.pb(sg[i - l]);
			}
		}
		for(ll i = 0; i < segment.size(); i++) {
			printf("%lld\n", segment[i]);
		}

		cout << "Case " << tc << ": " << segment.size();

		segment.clear();
		sg.clear();
		printf("\n");
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