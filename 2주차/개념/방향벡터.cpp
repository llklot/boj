#include<bits/stdc++.h>
using namespace std;

//1. dy, dx 정의
//위부터 시계방향으로
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

int main(){
    int y = 0, x = 0;

    //2. 4방향 탐색
    for(int i = 0; i < 4; i++){
        //3. next_y, next_x 정의
        int ny = y + dy[i];
        int nx = x + dx[i];

        //4. 출력
        cout << ny << " : "  << nx << '\n';
    }

    return 0;
}