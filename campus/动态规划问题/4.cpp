#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 动态规划 
int getLIS(vector<int> A, int n) {
	int dp[n];
	
	for (int i = 0; i < n; i++) {
		dp[i] = 0;
	}
	
	dp[0] = 1;
	
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (A[i] > A[j]) {
				dp[i] = max(dp[i], dp[j]);
			}
		}
		dp[i] = dp[i] + 1;
	}
	
	int res = 0;
	
	for (int i = 0; i < n; i++) {
		res = max(res, dp[i]);
	}
	
	return res;
} 

int main () {
	int n;
	cin >> n;
	
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	cout << getLIS(A, n);
	
	return 0;
}
