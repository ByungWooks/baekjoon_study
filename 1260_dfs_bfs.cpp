#include<iostream>
#include<vector>
#include<stack>
#include<queue>

#define MAX 1001

using namespace std;

void dfs(int arr[MAX][MAX],int V)
{
    vector<int> vec(MAX,false);
    stack<int> stk = {};
    stk.push(V);
    
    while(!stk.empty()){
        int t = stk.top();
        stk.pop();
        
        // 해당 번호가 true면 continue 
        if(vec[t]) continue;
        vec[t] = true;
        cout << t << " ";
        
        
        // 해당 t값과 연결된 값 stack에 push
        for(int i = MAX - 1;i >= 0;i--){
            if(arr[t][i] == 1 && !vec[i])
                stk.push(i);
        }
    }
    
}

void bfs(int arr[MAX][MAX],int V)
{
    vector<int> vec(MAX,false);
    queue<int> q = {};
    q.push(V);
    
    while(!q.empty()){
        int t = q.front();
        q.pop();
        
        // 해당 번호가 true면 continue 
        if(vec[t]) continue;
        vec[t] = true;
        cout << t << " ";
        
        
        // 해당 t값과 연결된 값 stack에 push
        for(int i = 0;i < MAX;i++){
            if(arr[t][i] == 1 && !vec[i])
                q.push(i);
        }
    }
    
}

int main()
{
    int N = 0;
    int M = 0;
    int V = 0;

    int arr[MAX][MAX] = {};

    cin >> N >> M >> V;
    for(int i = 0;i < M;i++){
        int a,b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    dfs(arr,V);
    cout << "\n";
    bfs(arr,V);
    cout << "\n";

    return 0;
    

}