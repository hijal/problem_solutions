#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

int findDuplicate(vector<int>& nums) {
	int ind = -1;
	sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 1; i++) {
    	if(nums[i] == nums[i + 1]) {
    		return nums[i];
    	}
    }
    return ind;
}

void init()
{
	int t; cin >> t;
	while(t--) {
		int n;
		cin >> n;

		vector<int> v;

		for(int i = 0; i < n; i++) {
			int a; cin >> a;
			v.pb(a);
		}
		cout << findDuplicate(v);
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

// source: https://leetcode.com/problems/find-the-duplicate-number/