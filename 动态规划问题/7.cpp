/* 最优编辑问题 */
#include <iostream>

using namespace std;

// 动态规划 
int findMinCost(string A, int n, string B, int m, int c0, int c1, int c2) {
    int dp[n + 1][m + 1];
    
    for (int i = 0; i <= n; i++) {
		dp[i][0] = i * c1;
	} 
	for (int i = 0; i <= m; i++) {
		dp[0][i] = i * c0;
	}
	if (c2 > c0 + c1) {
		c2 = c0 + c1;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (A[i - 1] == B[j - 1]) {
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1] + c0, dp[i - 1][j] + c1));
			} else {
				dp[i][j] = min(dp[i - 1][j - 1] + c2, min(dp[i][j - 1] + c0, dp[i - 1][j] + c1));
			}
		}
	}
	
	return dp[n][m];
}

int main() {
	int n;
	cin >> n;
	string A;
	cin >> A;
	int m;
	cin >> m;
	string B;
	cin >> B;
	
	int c0, c1, c2;
	cin >> c0 >> c1 >> c2;
	
	cout << findMinCost(A, n, B, m, c0, c1, c2);
	
	return 0;
}
