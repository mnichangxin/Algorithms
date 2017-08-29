/* ������Ϸ */
#include <iostream>

using namespace std;

int fun(int n) {
	int dp[n + 1];
	
	dp[0] = 1;
	dp[1] = 1;  
 	
 	for (int i = 2; i <= n; i++) {
		dp[i] = 0;
		for (int j = 0; j < i; j++) {
			dp[i] += dp[j]; 
		}
	}
	
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	
	cout << fun(n);
	
	return 0;	
}
