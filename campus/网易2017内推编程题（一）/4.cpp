#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long h;
    cin >> h;
    
   	long q = sqrt(h);
    
    if (q * (q + 1) <= h) {
		cout << q;
	} else {
		cout << q - 1;
	}
    
    return 0;
}
