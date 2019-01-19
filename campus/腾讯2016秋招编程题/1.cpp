#include <iostream>
#include <vector>

using namespace std;

vector<string> getGray(int n) {
	vector<string> v;
	
	if (n == 1) {
		v.push_back("0");
		v.push_back("1");

		return v;
	} else {
		vector<string> v = getGray(n - 1);
		int vSize = v.size();

		vector<string> v2;

		for (int i = 0; i < vSize; i++) {
			if(i % 2 == 0) {
				v2.push_back(v[i]+"0");
				v2.push_back(v[i]+"1");
			} else {
				v2.push_back(v[i]+"1");
				v2.push_back(v[i]+"0");
			}
		}

		return v2;
	}
} 

int main() {
	int n; 
	cin >> n;
	
	getGray(n);

	return 0;
} 
