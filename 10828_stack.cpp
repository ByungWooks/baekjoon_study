#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    int count = 0;
    cin >> count;

    string command;  // command
    int push_num = 0;

    stack<int> stk;

    while(count>0){
        cin >> command;
        if(command == "push"){
            cin >> push_num;
            stk.push(push_num);
        }
        else if(command == "pop"){
            if(!stk.empty()){
                cout << stk.top() << endl;
                stk.pop();
            }else{
                cout << "-1" << endl;
            }
        }
        else if(command == "size"){
            cout << stk.size() << endl;
        }
        else if(command == "empty"){
            if(!stk.empty()){
                cout << "0" << endl;
            }else{
                cout << "1" << endl;
            }
        }
        else if(command == "top"){
            if(!stk.empty()){
                cout << stk.top() << endl;
            }else{
                cout << "-1" << endl;
            }
        }
        count--;
    }
}