#include<iostream>
#include <vector>
#include <cmath>
#include<iomanip>

using namespace std;

double maxLen(vector<double> arr, int n) {
	double maxDic = 0;
	double circle = 360.00000000;
	
	for (int i = 1; i < n; i++) {
		if (arr[i] - arr[0] > 180) {
			maxDic = circle - arr[i] + arr[0];
			break;
		} 
		if (circle - arr[i] + arr[0] > 180) {
			maxDic = arr[i] - arr[0];
			break;
		}
		
		if (arr[i] - arr[0] > circle - arr[i] + arr[0]) {
			if (arr[i] - arr[0] > maxDic) {
				maxDic = arr[i] - arr[0];
			}	
		} else {
			if (circle - arr[i] + arr[0] > maxDic) {
				maxDic = circle - arr[i] + arr[0];
			}
		}
	}
	
	return maxDic;
}

int main() {
	int n;
	cin >> n;
	
	vector<double> arr;
	for (int i = 0; i < n; i++) {
		double in;
		cin >> in;
		arr.push_back(in);
	}
	
	cout << setiosflags(ios::fixed) << setprecision(8) << maxLen(arr, n);
	
	return 0;
} 
