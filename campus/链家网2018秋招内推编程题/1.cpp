#include <iostream>
#include <map>

using namespace std;

int main() {
	long n, r, avg, i;
	
	while (cin >> n >> r >> avg) {
		multimap<long, long> mm;
		
		long zf = 0, sum = n * avg;
		
		for (i = 0; i < n; ++i) {
			long x, y;
			cin >> y >> x;
			zf += y;
			mm.insert(make_pair(x, y));
		}
		
		if (zf >= sum) {
			cout << 0 << endl;
		} else {
			zf = sum - zf;
			multimap<long, long>::iterator it;
		
			long res, cnt = 0;
		
			for (it = mm.begin(); it != mm.end(); ++it) {
				res = r - it->second;
				
				if (res <zf) {
					zf -= res;
					cnt += res * it->first;
				}
				else {
					res = zf;
					cnt += res * it->first;
					break;
				}
			}
			
			cout << cnt << endl;
		}
	}
	
	return 0;
}
