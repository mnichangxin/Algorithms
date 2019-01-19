#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	int sum = 0;
	int prd = 1;
		
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		prd *= arr[i];
	}
	
	int count = 0;
	vector<int> exist; 
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < exist.size(); j++) {
			if (arr[i] == exist[j]) {
				break;
			} else {
				exist.push_back(arr[i]);
				if (sum - arr[i] > prd / arr[i]) {
					count++;
				}
			}
		}
	}
	
	cout << count;
	
	return 0;
}
