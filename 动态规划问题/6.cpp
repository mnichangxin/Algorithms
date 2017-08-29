/* 0-1背包问题 */
#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

int dp[1000][1000];

// 暴力求解 
//int find(vector<int> w, vector<int> v, int index, int cap) {
//	if (index < 0 || cap <= 0) {
//		return 0;
//	} else if (w[index] > cap) {
//		return find(w, v, index - 1, cap);
//	} else if (index == 0) {
//		return w[0];
//	}	
//	
//	return max(find(w, v, index - 1, cap - w[index]) + v[index], find(w, v, index - 1, cap));
//}

// 记忆化搜索
//int find(vector<int> w, vector<int> v, int index, int cap) {
//	if (index < 0 || cap <= 0) {
//		return 0;
//	} else if (w[index] > cap) {
//		return find(w, v, index - 1, cap);
//	} else if (dp[index] > 0) {
//		return dp[index];
//	} else if (index == 0) {
//		dp[0] = w[0];
//		return dp[0];
//	}
//	
//	dp[index] = max(find(w, v, index - 1, cap - w[index]) + v[index], find(w, v, index - 1, cap));
//	
//	return dp[index];
//}

// 动态规划
int maxValue(vector<int> w, vector<int> v, int n, int cap) {
	memset(dp, -1, sizeof(dp));
	
	for (int i = 0; i <= cap; i++) {
		dp[1][i] = i >= w[0] ? v[0] : 0;
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= cap; j++) {
			if (j >= w[i - 1]) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}	
	
	return dp[n][cap];
} 

//int maxValue(vector<int> w, vector<int> v, int n, int cap) {
//	memset(dp, -1, sizeof(dp));
//	return find(w, v, n - 1, cap);
//}

int main() {
	int n, cap;
	cin >> n >> cap;
	
	vector<int> w(n);
	vector<int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	cout << maxValue(w, v, n, cap);
	
	return 0;
}
