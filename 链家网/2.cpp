#include<iostream>
#include<vector>

using namespace std;

int main() {
	int nums;
	
	while (cin >> nums) { 
		vector<int> id(1001, 0); 
		vector<int> mem;
		int tmp; 
		
		for (int i = 1; i <= nums; i++) {
			cin >> tmp; 
			id[tmp]++;
		}
		
		for (int j = 1; j < id.size(); j++) {
			if (id[j] > 0) {
				mem.push_back(j);
			} 	
		}
		
		cout << mem.size() << endl;
		
		for (int i = 0; i < mem.size(); i++) {
			if (i == mem.size() - 1) {
				cout << mem[i];
			} else {
				cout << mem[i] << " ";
			}
		}
	}

  	return 0;
}
