#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	vector<int> res;
	for (int i = m; i < m + n + 2; i++) {
		res.push_back(i);
	}
	
	vector<int> resOut;
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; i < n; j++) {
			if (arr[j] == res[i]) {
				break;
			} 
			if (j == n - 1) {
				resOut.push_back(res[i]);
			}
		}
	}
	
	for (int i = 0; i < resOut.size(); i++) {
		cout << resOut[i] << " ";
	}
	
	return 0;
} 
