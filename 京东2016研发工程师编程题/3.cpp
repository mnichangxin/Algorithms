#include <iostream>
#include <cmath>

using namespace std;

class Apples {
	public:
		int getInitial(int n) {
			return (int)(pow(n , n) - n + 1);
		}
};

int main() {
	int n;
	cin >> n;
	
	Apples apples = Apples();
	
	cout << apples.getInitial(n);
	
	return 0;
}
