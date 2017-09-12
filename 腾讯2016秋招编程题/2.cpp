#include <iostream>
#include <vector>
#include <map>

using namespace std;

int getValue(vector<int> gifts, int n) {
	map<int, int> giftNums;
	
	for (int i = 0; i < n; i++) {
		if (giftNums.count(gifts[i]) == 0) {
			giftNums[gifts[i]] = 1;
		} else {
			giftNums[gifts[i]]++;
		}
	}
	
	map<int, int>::iterator iter;
	for (iter = giftNums.begin(); iter != giftNums.end(); iter++) {
		if (iter -> second > n / 2) {
			return iter -> first;
		}
	}
	
	return 0;
}

int main() {
	int n;
	cin >> n;
	
	vector<int> gifts(n);
	for (int i = 0; i < n; i++) {
		cin >> gifts[i];
	} 
		
	cout << getValue(gifts, n);
		
	return 0;
}
