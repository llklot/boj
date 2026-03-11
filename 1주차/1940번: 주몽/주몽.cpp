#include<bits/stdc++.h>
using namespace std;
int n, m, a[15004], cnt = 0;
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == m)cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}