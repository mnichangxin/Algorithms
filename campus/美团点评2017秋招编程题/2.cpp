/* Æ´´ÕÇ®±Ò */
#include <iostream>
#include <cstring>

using namespace std;

long long fun(int n) {
	int arr[6] = {1, 5, 10, 20, 50, 100};
	long long dp[6][10001];
	
	memset(dp, 0, sizeof(dp));
	
	for (int i = 0; i <= n; i++) {
		dp[0][i] = 1;
	}
	
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 0; k <= j / arr[i]; k++) {
				dp[i][j] += dp[i - 1][j - k * arr[i]];
			}
		}
	}
	
	return dp[5][n];
}

int main() {
	int n;
	cin >> n;
	
	cout << fun(n);
	
	return 0;
} 
