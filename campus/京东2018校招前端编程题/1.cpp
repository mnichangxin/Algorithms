#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <queue>
#include <set>
#include <map>

using namespace std;

map<string, int>bit;
map<string, int>vis;

int ans = 0;

int is (string str) {
	int cnt = 0;

	int t = str.size();
	int i = 0;
	while (t--) {
		if ('(' == str[i]) {
			cnt += 1;
		}
		else {
			cnt -= 1;
		}
		if (0 > cnt) {
			return 0;
		}
		i++;
	}
	
	return 1;
}

int dfs(string str) {
	int re = 0;
	vis[str] = 1;
	int t = str.size();
	
	if (t == 2) {
		bit[str] = 1;
		return 1;
	}
	
	string nxt;
	int m = t;
	int i = 1;
	
	while (m--) {
		if ( ')'==str[i]) {
			nxt = str.substr(1, i - 1) + str.substr(i + 1, str.size() - i);
			if (vis[nxt] == 1) {
				re = re + bit[nxt];
			}
			else if (is(nxt) == 1) {
				re = re + dfs(nxt);
			}
		}
		i++;
	}
	
	bit[str] = re;
	
	return re;
}
int main() {

	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	ans = dfs(str);
	cout << ans << endl;
	
	return 0;
}

