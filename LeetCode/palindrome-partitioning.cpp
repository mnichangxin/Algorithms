#include <iostream>
#include <vector>

using namespace std;

bool isPartition(string s) {
	int i = 0, j = s.length() - 1;
	int flag = 1;	
	while (i < j) {
		if (s[i] != s[j]) {
			flag = 0;
			break;
		}
		i++;
		j--;
	}

	if (flag) {
		return true;
	} else {
		return false;
	}
}

void calResult(vector<vector<string>> result, vector<string> list, string s) {
	if (s.length() == 0) {
		result.push_back(list);
	}
	
	int len = s.length();
	
	for (int i = 1; i < len; i++) {
		string subStr = s.substr(0, i + 1);
		if (isPartition(substr)) {
			list.push_back(subStr);
			string restSubStr = s.substr(i + 1);
			calResult(result, list, resSubStr);
			list.clear(list.size() - 1);
		}
	}
}

vector<vector<string>> partition(string s) {
	for (int i =) {
	
	}	
}

int main() {
	string s;
	cin >> s;

//	partition(s);
	
	return 0;
}
