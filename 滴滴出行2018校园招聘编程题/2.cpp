#include <iostream>
#include <vector>

using namespace std;
 
int getUgly(int n) {
	if(n == 0) {
		return 0;
	}

	vector<int> dp(n, 1);
	
	int j = 0, k = 0, l = 0;
	
	for(int i = 1; i < n; i++) {
		if(dp[j] * 2 <= dp[i-1]) {
			j++;
		}
		if(dp[k] * 3 <= dp[i-1]) {
			k++;
		}
		if(dp[l] * 5 <= dp[i-1]) {
			l++;
		}
		
		dp[i] = min(dp[j] * 2, min(dp[k] * 3, dp[l] * 5));
	}
	
	return dp[n - 1];
}

int main() {
	int n;
	cin >> n;
	
	cout << getUgly(n);
	
	return 0;
}
