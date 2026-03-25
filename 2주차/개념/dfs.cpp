#include<bits/stdc++.h>
using namespace std;
const int n = 5;
int u, visited[n];
vector<int> adj[n];
void dfs(int u){
    visited[u] = 1;
    cout << u << '\n';
    for(int v : adj[u]){
        if(!visited[v]) dfs(v);
    }
    cout << u << "로부터 시작된 함수 종료" << '\n';
    return;
}
int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[4].push_back(2);
    dfs(1);
    return 0;
}