#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    while(cin >> n){
        ll ret = 1, cnt = 1;
        while(1){
            if(cnt % n == 0){
                cout << ret << '\n';
                break;
            }else{
                ret++;
                cnt = cnt * 10 + 1;
                cnt %= n;
            }
        }
    }
    return 0;
}