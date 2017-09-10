#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n; 
	cin >> n;
	
	string s = "";
	
	if (n % 2 == 0) {		
		int count = n;
		
		while (count == 0) {
//			if (count == 2) {
//				count = (count - 1) / 2;
//				s = "1" + s; 
//			}
			
			if (count % 2 == 0) {
				count = (count - 2) / 2;
				s = "2" + s;
				cout << s;
			} else {
				count = (count - 1) / 2;
				s = "1" + s;
			}
		}
	}
	
	cout << s;
		
	return 0;
} 
