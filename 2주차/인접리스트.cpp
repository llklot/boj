#include<bits/stdc++.h>
using namespace std;
const int v = 4;
vector<int> adj[v];
int main(){
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);

    adj[1].push_back(0);
    adj[1].push_back(2);

    adj[2].push_back(0);
    adj[2].push_back(1);

    adj[3].push_back(0);

    for(int i = 0; i < v; i++){
        cout << i << " :: ";
        for(int t : adj[i]){
            cout << t << ' ';
        }
        cout << '\n';
    }
    return 0;
}