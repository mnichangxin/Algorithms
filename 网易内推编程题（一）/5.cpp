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
        
		if(sum % n != 0) //����������ܱ�ƽ�֣���ô��ôŲҲ��ʧ��
            flag = 1;
        
		int avg = sum / n, cnt = 0;
        
		for (int i = 1; i <= n; i++) {
            if (abs(a[i] - avg) % 2 != 0) //����еĲ���ͨ��ÿ��Ų�����ﵽƽ��ֵ��ô�ͻ�ʧ��
                flag=1;
            cnt += abs(a[i] - avg) / 2;
        }
        
        if (flag)
            cout<< -1 << endl;
        else
            cout<< cnt / 2 << endl; //ÿ��Ų�����������ţ�����⣬����Ҫ��2
    }
}
