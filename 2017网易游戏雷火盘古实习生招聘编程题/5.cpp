/* 调整队形 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	int count1 = 0;
	int count2 = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'B') {
			for (int j = i; j < s.length(); j++) {
				if (s[j] == 'G') {
					count1++;
				}
			}
		}
		
		if (s[i] == 'G') {
			for (int j = i; j < s.length(); j++) {
				if (s[j] == 'B') {
					count2++;
				}
			}
		}
	}
	
	cout << min(count1, count2);
	
	return 0;
}
