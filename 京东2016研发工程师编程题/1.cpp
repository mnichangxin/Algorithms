#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Bonus {
	public:
		int getMost(vector<vector<int>> board) {
			int dp[6][6];
			memset(dp, 0, sizeof(dp));
			
			dp[0][0] = board[0][0];
						
			for (int i = 1; i < 6; i++) {
				dp[0][i] = board[0][i] + dp[0][i - 1];
			}			
			for (int i = 1; i < 6; i++) {
				dp[i][0] = board[i][0] + dp[i - 1][0];
			}			
			for (int i = 1; i < 6; i++) {
				for (int j = 1; j < 6; j++) {
					dp[i][j] = board[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
			
			return dp[5][5];
		} 
}

