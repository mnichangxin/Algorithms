#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

const int N = 110;
const long long inf = 1e16;
long long a[N], mx[N][15], mn[N][15];

int main(){
    int n;

    while (scanf("%d", &n) > 0) {
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);
        }
        
        int d, m;
        
		scanf("%d%d", &m, &d);
         
		for (int i = 1; i <= n; i++) {
            mx[i][0] = 1;
            mn[i][0] = 1;
            for(int j = 1; j <= m; j++) {
                mx[i][j] = -inf;
                mn[i][j] = inf;
            }
        }
        
		long long mmx = -100, mmn = 100;
        long long ans = -inf;
        
		for (int i = 1; i <= n; i++) {
                mmx = max(mmx, a[i]);
                mx[i][1] = a[i];
                mn[i][1] = a[i];
                if(m == 1) {
					ans = max(ans, mmx);
				} 
        }
        
		for (int i = 1; i <= n; i++) {
            for(int j = 2; j <= m && j <= i; j++){
                for(int k = i - 1; k >= max(1, i - d) && k >= j - 1; k--){
                    mx[i][j] = max(mx[i][j], mx[k][j - 1] * a[i]);
                    mx[i][j] = max(mx[i][j], mn[k][j - 1] * a[i]);
                    mn[i][j] = min(mn[i][j], mn[k][j - 1] * a[i]);
                    mn[i][j] = min(mn[i][j], mx[k][j - 1] * a[i]);
                    if(j == m) {
						ans = max(ans, mx[i][j]);
					} 
                }
            }
        }
        
		printf("%lld\n", ans);
    }
}
