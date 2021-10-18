#include <iostream>
#include <stdio.h>
#include <string>
#include <memory.h>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <time.h>
#include <assert.h>
#include <cmath>
#include <stack>
#include <string.h>
#include <sstream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 100001;
char s[N + 1], t[N + 1];
int dp[2][N + 1], f[N], nextJ[N][26];
int n, m;

int fail(int j, char c) {
	int &ret = nextJ[j][c];
	if (ret != -1) {
		return ret;
	}
	if (t[j] == c) {
		++j;
		if (j == m) {
			return ret = f[j - 1];
		}
		return ret = j;
	}
	if (!j) {
		return ret = 0;
	}
	return ret = fail(f[j - 1], c);
}

int main()
{
	scanf("%s%s", s, t);
	n = strlen(s);
	m = strlen(t);
	if (m > n) {
		puts("0");
		return 0;
	}
	int l = 0;
	for (int i = 0; i < n; ++i)
		s[i] -= 'a';
	for (int j = 0; j < m; ++j)
		t[j] -= 'a';
	for (int i = 1; i < m; ++i) {
		while (l && t[i] != t[l])
			l = f[l - 1];
		if (t[i] == t[l])
			++l;
		f[i] = l;
	}
	memset(nextJ, -1, sizeof(nextJ));
	for (int i = n - 1; i >= 0; --i) {
		for (int j = 0; j < m; ++j) {
			int &ret = dp[1 & i][j];
			ret = 0;
			if (s[i] == '?' - 'a') {
				for (int c = 0; c < 26; ++c)
					ret = max(ret, dp[1 & ~i][fail(j, c)] + (j == m - 1 && c == t[j]));
			} else
				ret = dp[1 & ~i][fail(j, s[i])] + (j == m - 1 && s[i] == t[j]);
		}
	}
	printf("%d\n", dp[0][0]);
	return 0;
}