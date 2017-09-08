#include <iostream>
#include <vector>

using namespace std;

int minLen(vector<vector<int>> arr, int n, int m, int startX, int startY, int endX, int endY) {
	if (arr[endX][endY] > 0) {
		return -1;
	} else {
		return 0;
	}
}

int main () {
	int n, m;
	cin >> n >> m;
	
	int startX, startY;
	cin >> startX >> startY;
	
	int endX, endY;
	cin >> endX >> endY;
	
	vector<vector<int>> arr(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int in;
			cin >> in;
			arr[i][j] = in;
		}
	}
	
	cout << minLen(arr, n, m, startX, startY, endX, endY); 
	
	return 0;
}
