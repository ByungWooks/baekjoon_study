#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main()
{
    deque<int> d;
    int N;
    cin >> N;

    while(N>0){
        string str;
        cin >> str;

        if(str == "push_back"){
            int num;
            cin >> num;
            d.push_back(num);
        }else if(str == "push_front"){
            int num;
            cin >> num;
            d.push_front(num);
        }else if(str == "pop_front"){
            if(d.empty()){
                cout << -1 << "\n";
            }else{
                cout << d.front() << "\n";
                d.pop_front();
            }
        }else if(str == "pop_back"){
            if(d.empty()){
                cout << -1 << "\n";
            }else{
                cout << d.back() << "\n";
                d.pop_back();
            }
        }else if(str == "size"){
            cout << d.size() << "\n";
        }else if(str == "empty"){
            if(d.empty()){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
        }else if(str == "front"){
            if(d.empty()){
                cout << -1 << "\n";
            }else{
                cout << d.front() << "\n";
            }
        }else if(str == "back"){
            if(d.empty()){
                cout << -1 << "\n";
            }else{
                cout << d.back() << "\n";
            }
        }
        N--;
    }
}