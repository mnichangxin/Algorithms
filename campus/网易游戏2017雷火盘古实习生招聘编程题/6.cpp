/* Ïû³ıÖØ¸´ÔªËØ */
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} 
	
	vector<int> v;
	
	v.push_back(arr[n - 1]);
	
	for (int i = n - 1; i >= 0; i--) {		
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == arr[i]) {
				break;
			} 
			if (j == v.size() - 1) {
				v.push_back(arr[i]);
			}
		}	
	}
	
	for (int i = v.size() - 1; i >= 0; i--) {
		if (i != 0) {
			cout << v[i] << " ";
		} else {
			cout << v[i];
		}
	}
	
	return 0;
}

