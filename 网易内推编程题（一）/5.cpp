#include<iostream>
#include<algorithm>

using namespace std;

int a[100];

int main() {
    int n;

    while(scanf("%d", &n) > 0) {
        int sum=0;
        
        for (int i=1; i<=n; i++) {
            scanf("%d", &a[i]);
            sum = sum + a[i];
        }
        
        int flag = 0;
        
		if(sum % n != 0) //如果总数不能被平分，那么怎么挪也是失败
            flag = 1;
        
		int avg = sum / n, cnt = 0;
        
		for (int i = 1; i <= n; i++) {
            if (abs(a[i] - avg) % 2 != 0) //如果有的不能通过每次挪两个达到平均值那么就会失败
                flag=1;
            cnt += abs(a[i] - avg) / 2;
        }
        
        if (flag)
            cout<< -1 << endl;
        else
            cout<< cnt / 2 << endl; //每次挪动解决两个奶牛的问题，所以要除2
    }
}
