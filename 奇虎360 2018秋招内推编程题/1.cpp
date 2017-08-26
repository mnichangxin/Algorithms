#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n, m, a, b, c, d, x, y, z;
	
	cin >> n >> m;
	cin >> a >> b >> c >> d;
	cin >> x >> y >> z;
	
	int res = 0;
	
	if (y > x || z > x) {
		while (n >= d) {
			n -= d;
			res += z;
		}
		while (m >= c) {
			m -= c;
			res += y;
		}
		while (n >= a && m >= b) {
			n -= a;
			m -= b;
			res += x;
		}
	} else {
		while (n >= a && m >= b) {
			n -= a;
			m -= b;
			res += x;
		}
		while (n >= d) {
			n -= d;
			res += z;
		}
		while (m >= c) {
			m -= c;
			res += y;
		}
	}
	
	cout << res;
	
	return 0;
} 
