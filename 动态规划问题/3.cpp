/* 矩阵最小路径问题 */
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 暴力搜索 
int pathMin(vector<vector<int> > map, int x, int y) {
	if (x == 0 || y == 0) {
		return 0;
	} else if (x == 1) {
		return map[x][y] + map[x][y - 1];
	} else if (y == 1) {
		return map[x][y] + map[x - 1][y];
	}

	return map[x][y] + min(pathMin(map, x - 1, y), pathMin(map, x, y - 1));
}

int getMin(vector<vector<int> > map, int n, int m) {
	return pathMin(map, n, m);
}

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<int> > map(n + 1, vector<int>(m + 1));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int read = 0;
			cin >> read;	
			map[i][j] = read;
		}		
	}
	
	cout << getMin(map, n, m);
	
	return 0;
}
