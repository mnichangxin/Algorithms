#include <vector>

using namespace std;

bool Find(int target, vector<vector<int> > array) {
	int m = array.size(); 
	int n = array[0].size();
	
	int i = 0;
	int j = n - 1;
	
	while (i >= 0 && i < m && j >=0 && j < n) {
		if (target == array[i][j]) {
			return true;
		} else if (target < array[i][j]) {
			j--;
		} else {
			i++;
		}
	}
	
	return false;	
}

