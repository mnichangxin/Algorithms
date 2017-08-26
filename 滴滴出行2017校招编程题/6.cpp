#include <iostream>

using namespace std;

int const maxn = 1100;
int data[maxn];
long long f[maxn];

int main() {
    int n, sum;
    cin >> n >> sum;

    for (int i = 1; i <= n; i++) {
        cin >> data[i];   
    }

    f[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = maxn; j >= 0; j--) {
            if(j >= data[i]) {
                f[j] += f[j - data[i]];
            } 
        }
    }

    cout << f[sum] << endl;

	return 0;
}
