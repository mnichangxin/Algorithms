#include<iostream>
#include <cmath>

using namespace std;

float heiCount(int H, int x, int y, int h, int s) {
	float sPre =  float(s) - float(h) / float(x);
		
	if (s * x > h) {
		int enter = x - y;
		float height = h + enter * sPre;
		
		return round(height);
	} else {
		return round(s * x);
	}
} 

int main() {
	int H, x, y, h, s;
	cin >> H >> x >> y >> h >> s; 
	
	cout << heiCount(H, x, y, h, s);
	
	return 0; 
} 
