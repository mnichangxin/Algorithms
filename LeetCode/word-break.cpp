/* word-break */
#include <iostream>
#include <unordered_set>
#include <cstring>

using namespace std;

bool wordBreak(string s, unordered_set<string> &dict) {
	bool dp[s.length() + 1];
	memset(dp, false, sizeof(dp));
	dp[0] = true;
	
	for (int i = 1; i <= s.length(); i++) {
		if (dp[i - 1]) {
			int index = i - 1;
			for (int j = index; j < s.length(); j++) {
				if (dict.count(s.substr(index, j - index + 1)) > 0) {
					dp[j + 1] = true;
				}
			}	
		}
	}
	
	return dp[s.length()];
}

int main() {
	string s = "leetcode";
	unordered_set<string> dict;
	
	dict.insert("leet");
	dict.insert("code");
	
	if (wordBreak(s, dict)) {
		cout << "true"; 
	} else {
		cout << "false";
	}
	
	return 0;
} 
