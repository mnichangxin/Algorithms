/* ¸ÏÈ¥¹«Ë¾ */
#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int tX[n], tY[n];
	for (int i = 0; i < n; i ++) {
		cin >> tX[i];
	}
	for (int i = 0; i < n; i ++) {
		cin >> tY[i];
	}
	
	int gx, gy;
	cin >> gx >> gy;
	
	int walkTime, taxiTime;
	cin >> walkTime >> taxiTime;
	
	int walkCount, taxiCount = INT_MAX;
	
	walkCount = (abs(gx) + abs(gy)) * walkTime;
	
	for (int i = 0; i < n; i++) {
		int time = (abs(tX[i]) + abs(tY[i])) * walkTime + (abs(gx - tX[i]) + abs(gy - tY[i])) * taxiTime;
		
		if (time < taxiCount) {
			taxiCount = time;
		}
	}
	
	cout << min(walkCount, taxiCount);
	
	return 0;
} 
