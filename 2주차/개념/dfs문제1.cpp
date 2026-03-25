#include<bits/stdc++.h>
using namespace std;
int n, m, cnt = 0;
int a[104][104], visited[104][104];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(!a[ny][nx]) continue;
        if(visited[ny][nx]) continue;
        dfs(ny, nx);
    }
    return;
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] && !visited[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    }    
    cout << cnt << '\n';
    return 0;
}