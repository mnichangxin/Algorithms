#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	vector<int> arr;
	int k;
	
	char ch;
	
	while ((ch = cin.get()) != '\n') {
		int in = 0;
		cin.unget();
		cin >> in;
		arr.push_back(in);
	}
	
	cin >> k; 
	
	sort(arr.begin(), arr.end());
	
	cout << arr[arr.size() - k];
	
	return 0;
}
