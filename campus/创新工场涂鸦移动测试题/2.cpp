#include <iostream>
#include <cstring>

using namespace std;

string maxLen(string s) {
	int dp[s.length()];
	
	memset(dp, 0, sizeof(dp));
	
	dp[0] = 1;
	
	int lastStart = 0;
	int maxLen = 0, maxIndex = 0;
	
	for (int i = 1; i < s.length(); i++) {
		for (int j = i - 1; j >= lastStart; j--) {
			if (s[j] == s[i]) {
				dp[i] = i - j;
				lastStart = j + 1;
				break;
			} else if (j == lastStart) {
				dp[i] = dp[i - 1] + 1;
			}
			if (dp[i] > maxLen) {
				maxLen = dp[i];
				maxIndex = i + 1 - maxLen;
			}
		}
	}		
	
	return s.substr(maxIndex, maxLen);
}	

int main() {
	string s;
	cin >> s;
	
	cout << maxLen(s);
		
	return 0;
}
