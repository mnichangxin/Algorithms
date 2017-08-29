#include <iostream>
#include <cstring>

using namespace std;

int maxStr(string s1, string s2) {
	int dp[51][51];
	memset(dp, 0, sizeof(dp));
	
	dp[0][0] = s1[0] == s2[0] ? 1 : 0;
	for (int i = 0; i < s1.length(); i++) {
		dp[i][0] = s1[i] == s2[0] ? 1 : 0;
	}
	for (int i = 0; i < s2.length(); i++) {
		dp[0][i] = s1[0] == s2[i] ? 1 : 0;
	}
	
	for (int i = 1; i < s1.length(); i++) {
		for (int j = 1; j < s2.length(); j++) {
			if (s1[i] == s2[j]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} 
		}
	}

	int maxLength = 0;
	for (int i = 0; i < s1.length(); i++) {
		for (int j = 0; j < s2.length(); j++) {
			maxLength = max(dp[i][j], maxLength);
		}
	}
	
	return maxLength;
}

int main() {
	string s1, s2;
	
	getline(cin, s1);
	getline(cin, s2);
	
	cout << maxStr(s1, s2);
}
