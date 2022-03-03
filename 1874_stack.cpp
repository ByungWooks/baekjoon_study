#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> stk;
    vector<char> vec;
    bool NONO = true;
    int max = 0;    // max 선언 위치 변경
    bool return_point = false;  // return point 선언 위치 변경

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        
        if (num == n)
        {
            return_point = true;
            for (int j = max; j < num; j++) // 코드 추가 (25~29)
            {
                stk.push(j + 1);
                vec.push_back('+');
            }
        }

        if (return_point)
        { 
            // max 숫자 아래 부분
            if (stk.top() == num)
            {
                stk.pop();
                vec.push_back('-');
            }
            else
            {
                NONO = false;
            }
        }
        else
        { 
            // max 숫자 윗 부분
            if (stk.empty() || stk.top() < num)
            {
                for (int j = max; j < num; j++)
                {
                    stk.push(j + 1);
                    vec.push_back('+');
                }
                stk.pop();
                vec.push_back('-');
                if(max < num){
                    max = num;
                }
            }
            else if (stk.top() == num)
            {
                stk.pop();
                vec.push_back('-');
            }
            else
            {
                NONO = false;
            }
        }
    }

    if (NONO)
    {
        for (char i : vec)
        {
            cout << i << '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
    }
}