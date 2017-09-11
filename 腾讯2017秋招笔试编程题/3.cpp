#include <iostream>
#include <vector>

using namespace std;

int logN(int n) {
    vector<int> result;

    for (int i = 2; i < n;i++) {
        for (int j = 1; j <= i; j++) {
            if (i%j == 0 && j < i && j != 1) {
				break;
			} else if (i == j) {
				result.push_back(i);
			}
        }
    }

    int count = 0;
    for (auto resultBegin = result.begin() + 1; resultBegin != result.end(); resultBegin++) {
        for (auto resultB = result.begin(); resultB != resultBegin + 1; resultB++) {
            if (*resultB + *resultBegin == n) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    cout << logN(n);

    return 0;
}
