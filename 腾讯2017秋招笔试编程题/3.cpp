#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int dataInput;
    cout << "输入一个正整数： ";
    cin >> dataInput;

    //判断是否为正整数
    if (dataInput <= 0)
    {
        cout << "输入数据有误，程序退出..." << endl;
        exit(EXIT_FAILURE);
    }


    //取出素数
    vector<int> result;

    for (int i = 2; i < dataInput;i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0 && j < i && j != 1)
                break;
            else if (i == j)
                result.push_back(i);

        }
    }

    //计算是否等于输入值
    int count = 0;
    for (auto resultBegin = result.begin() + 1; resultBegin != result.end(); resultBegin++)
    {
        for (auto resultB = result.begin(); resultB != resultBegin + 1; resultB++)
        {
            if (*resultB + *resultBegin == dataInput)
            {
                cout << "a = " << *resultB << "; b = " << *resultBegin << endl;
                count++;
            }
        }
    }

    cout << count << endl;


    return 0;
}
