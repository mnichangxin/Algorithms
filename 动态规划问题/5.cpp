/* LCS(最长公共子序列) */
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int dp[300][300];

//// 暴力求解 
//int maxLCS(string A, int x, string B, int y) {
//	if (x == -1 || y == -1) {
//		return 0;
//	} else if (A[x] == B[y]) {
//		return maxLCS(A, x - 1, B, y - 1) + 1;
//	} else if (A[x] != B[y]) {
//		return max(maxLCS(A, x - 1, B, y), maxLCS(A, x, B, y - 1));
//	}
//	
//	return 0;
//}

// 记忆化搜索
//int maxLCS(string A, int x, string B, int y) {
//	if (x == -1 || y == -1) {
//		return 0;
//	} else if (dp[x][y] > 0) {
//		return dp[x][y];
//	} else if (A[x] == B[y]) {
//		dp[x][y] = maxLCS(A, x - 1, B, y - 1) + 1;
//		return dp[x][y];
//	} else if (A[x] != B[y]) {
//		dp[x][y] = max(maxLCS(A, x - 1, B, y), maxLCS(A, x, B, y - 1));
//		return dp[x][y];
//	}
//	
//	return 0;
//} 

// 动态规划
int findLCS(string A, int n, string B, int m) {
	memset(dp, -1, sizeof(dp));	
	
	dp[0][0] = A[0] == B[0] ? 1 : 0;
	for (int i = 1; i < n; i++) {
		dp[i][0] = A[i] == B[0] ? 1 : dp[i - 1][0];
	}
	for (int i = 1; i < m; i++) {
		dp[0][i] = B[i] == A[0] ? 1 : dp[0][i - 1];
	}
	
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (A[i] == B[j]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else if (A[i] != B[j]) {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	
	return dp[n - 1][m - 1];
} 

//int findLCS(string A, int n, string B, int m) {
//	memset(dp, -1, sizeof(dp));
//	return maxLCS(A, n - 1, B, m - 1);
//}

int main() {
	int n, m;
	string A, B;
	cin >> n;
	cin >> A;
	cin >> m;
	cin >> B;
	
	cout << findLCS(A, n, B, m);
	
	return 0;
} 
