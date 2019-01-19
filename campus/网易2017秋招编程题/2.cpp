#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int rr;
	scanf("%d", &rr);
	
	int r = int(sqrt(rr));
	
	int count = 0;
	
	for (int i = 1; i <= r; i++) {
		int ii = i * i;
		if (int(sqrt(rr - ii)) == sqrt(rr - ii)) {
			count++;
		}
	}
	
	cout << count * 4;
	
	return 0;
}
