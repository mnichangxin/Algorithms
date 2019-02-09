/* 矩阵最小路径问题 */
#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

int dp[101][101];

//// 暴力搜索 
//int pathMin(vector<vector<int> > map, int x, int y) {
//	if (x == 0 || y == 0) {
//		return 0;
//	} else if (x == 1) {
//		return map[x][y] + map[x][y - 1];
//	} else if (y == 1) {
//		return map[x][y] + map[x - 1][y];
//	}
//
//	return map[x][y] + min(pathMin(map, x - 1, y), pathMin(map, x, y - 1));
//}
//
//// 记忆化搜索 
//int pathMin(vector<vector<int> > map, int x, int y) {
//	if (x == 0 || y == 0) {
//		return 0;
//	} else if (x == 1) {
//		return map[x][y] + map[x][y - 1];
//	} else if (y == 1) {
//		return map[x][y] + map[x - 1][y];
//	}
//	
//	if (dp[x][y] > 0) {
//		return dp[x][y];
//	}
//	
//	dp[x][y] = map[x][y] + min(pathMin(map, x - 1, y), pathMin(map, x , y - 1));
//	
//	return  dp[x][y];
//}

// 动态规划
int getMin(vector<vector<int> > map, int n, int m) {	
	dp[1][1] = map[1][1];
	for (int i = 2; i <= n; i++) {
		dp[i][1] += map[i][1] + dp[i - 1][1];
	}
	for (int i = 2; i <= m; i++) {
		dp[1][i] = map[1][i] + dp[1][i - 1];
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= m ; j++) {
			dp[i][j] = map[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	
	return dp[n][m];
} 

//int getMin(vector<vector<int> > map, int n, int m) {
//	for (int i = 1; i <= 101; i++) {
//		for (int j = 1; j < 101; j++) {
//			dp[i][j] = 0;
//		} 
//	}
//	
//	return pathMin(map, n, m);
//}

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
