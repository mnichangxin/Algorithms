#include <iostream> 
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <unordered_map>
#include <algorithm>

using namespace std;

long long a[10010];
long long b[10010];
long long dp[10010][10010];

int main() {
	int n;
	long long sum = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[n - 1 - i] = a[i];
		sum += a[i];
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + a[i - 1];
			}
			else {
				dp[i][j] = std::max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
	}
	
	cout << sum + sum - dp[n][n] << endl;
	
	return 0;
}
