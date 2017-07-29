#include <vector>

using namespace std;

class Solution {
	public:
	    int minNumberInRotateArray(vector<int> rotateArray) {
	   		if (rotateArray.size() == 0) {
				return 0;
			}
			  
			int min = INT_MAX;
			   
			for (int i = 0; i < rotateArray.size(); i++) {
				if (rotateArray[i] < min) {
					min = rotateArray[i]; 
				}
			}  
			
			return min;
	    }
};

