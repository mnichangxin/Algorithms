#include <iostream>

using namespace std;

class Balls {
	public: 
		int calcDistance(int A, int B, int C, int D) {
	    	return 3 * (A + B + C + D);
	    }
};

 
int main() {
	Balls balls = Balls();
		
	cout << balls.calcDistance(100, 90, 80, 70);
	
	return 0;
}
