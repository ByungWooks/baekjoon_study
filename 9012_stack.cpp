#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int num = 0;
    cin >> num;

    stack<char> stk;
    string str;

    while(num > 0)
    {
        cin >> str;
        int count = 0;
        for(char c : str){
            if(c == '('){
                stk.push(c);
            }else{
                if(stk.empty()){
                    cout << "NO" << endl;
                    break;
                }else{
                    stk.pop();
                }
            }
            count++;
            if(count == str.size() && stk.empty()){
                cout << "YES" << endl;     
            }else if(count == str.size() && !stk.empty()){
                    cout << "NO" << endl;
            }
        }
        while(!stk.empty()){
            stk.pop();
        }
        num--;
    }
}