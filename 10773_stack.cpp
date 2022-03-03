#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int num;
    cin >> num;

    stack<int> stk;
    int sum = 0;

    for(int i=0; i < num; i++){
        int input;
        cin >> input;
        if(input == 0){
            stk.pop();
        }else{
            stk.push(input);
        }
    }
    while(!stk.empty()){
        sum += stk.top();
        stk.pop();
    }
    cout << sum << endl;
}