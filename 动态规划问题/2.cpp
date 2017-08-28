/* 台阶问题 */
#include <iostream>
#include <cstring>

using namespace std;

// 暴力搜索 
//int depfun(int i) {
//	if (i <= 0) {
//		return 0;
//	} else if (i == 1) {
//		return 1; 
//	} 
//	
//	return depfun(i - 1) + depfun(i - 2);
//}

// 记忆化搜索
//int dp[100000];
//int depfun(int i) {
//	if (i <= 0) {
//		return 0;
//	} else if (i == 1) {
//		return 1;
//	} else if (i == 2) {
//		return 2;
//	}
//	
//	if (dp[i] > 0) {
//		return dp[i];
//	}
//	
//	return depfun(i - 1) + depfun(i - 2);
//}

// 动态规划 
int countWays(int n) {
	memset(dp, -1, sizeof(dp));
	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	} 
	
	return dp[n];
//	return depfun(n);
}

int main() {
	int n; 
	cin >> n;
	
	cout << countWays(n);
	
	return 0;
}
