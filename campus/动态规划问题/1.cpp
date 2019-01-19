/* 找零钱问题 */
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int dp[60][1100];

//暴力搜索 
//int recurcount(vector<int> penny, int begin, int n, int aim) {
//	if (begin == n - 1) {
//		if (aim % penny[begin] == 0) {
//			return 1;
//		} else {
//			return 0;
//		}
//	}
//	
//	int sum = 0;
//	for (int i = 0; i * penny[begin] <= aim; i++) {
//		sum += recurcount(penny, begin + 1, n, aim - i * penny[begin]);
//	}		
//	
//	return sum;
//}

// 记忆化搜索
//int recurcount(vector<int> penny, int begin, int n, int aim) {
//	if (begin == n - 1) {
//		if (aim % penny[begin] == 0) {
//			return 1;
//		} else {
//			return 0;
//		}
//	}
//	
//	int sum = 0;
//	for (int i = 0; i * penny[begin] <= aim; i++) {
//		if (dp[begin + 1][aim - i * penny[begin]] == -1) {
//			dp[begin + 1][aim - i * penny[begin]] = recurcount(penny, begin + 1, n, aim - i * penny[begin]);	
//		} 
//		
//		sum += dp[begin + 1][aim - i * penny[begin]];
//	}		
//	
//	return sum;	
//} 

//  动态规划
int countWays(vector<int> penny, int n, int aim) {
	memset(dp, 0, sizeof(dp));
	
	for (int i = 0; i <= aim; i++) {
		if (i % penny[0] == 0) {
			dp[0][i] = 1;
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= aim; j++) {
			for (int k  = j; k >= 0; k = k - penny[i]) {
				dp[i][j] += dp[i - 1][k];
			}
		}
	}
	
	return dp[n - 1][aim];
} 

//int countWays(vector<int> penny, int n, int aim) {
//	memset(dp, -1, sizeof(dp));
//	return recurcount(penny, 0, n, aim);
//}

int main() {
	int n;
	cin >> n;
	
	vector<int> penny;
	for (int i = 0; i < n; i++) {
		int read = 0;
		cin >> read;
		penny.push_back(read);
	}
	
	int aim;
	cin >> aim;
	
	cout << countWays(penny, n, aim);
	
	return 0;
} 
