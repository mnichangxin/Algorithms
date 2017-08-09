#include <iostream>

using namespace std;

int palindrome(int *item, int head, int tail) {
	int left = item[head];
	int right = item[tail];
	
	int count = 0;
	
	while (head < tail && left != right) {
		if (left < right) {
			left += item[++head];
			count++;
		} else {
			right += item[--tail];
			count++;
		}
	}
	
	if (head >= tail) {
		return count;
	} else {
		return count + palindrome(item, ++head, --tail);
	}
}

int main() {
	int n;
	cin >> n;
	
	int item[n];
	for (int i = 0; i < n; i++) {
		cin >> item[i];
	}
	
	cout << palindrome(item, 0, n - 1);
	
	return 0;
} 
