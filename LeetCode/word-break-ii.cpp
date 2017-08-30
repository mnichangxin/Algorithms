/* word-break-ii */
#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstring>

using namespace std;

vector<string> wordBreak(string s, unordered_set<string> &dict) {
	bool dp[s.length() + 1];
	memset(dp, false, sizeof(dp));
	dp[0] = true;
	
	vector<string> v;
	
	for (int i = 1; i <= s.length(); i++) {
		if (dp[i - 1]) {
			string d = s.substr(0, i) + " ";
			int index = i - 1;
			for (int j = index; j < s.length(); j++) {
				if (dict.count(s.substr(index, j - index + 1)) > 0) {
					dp[j + 1] = true;
					s += s.substr(index, j - index + 1) + " "; 
				}
			}	
			v.push_back(d);
		}
	}
	
	return v;
}

int main() {
	string s = "catsanddog";
	unordered_set<string> dict;
	
	dict.insert("cat");
	dict.insert("cats");
	dict.insert("and");
	dict.insert("sand");
	dict.insert("dog");
	
	vector<string> v = wordBreak(s, dict);
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	
	return 0;
}
