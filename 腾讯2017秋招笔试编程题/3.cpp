#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int dataInput;
    cout << "����һ���������� ";
    cin >> dataInput;

    //�ж��Ƿ�Ϊ������
    if (dataInput <= 0)
    {
        cout << "�����������󣬳����˳�..." << endl;
        exit(EXIT_FAILURE);
    }


    //ȡ������
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

    //�����Ƿ��������ֵ
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
