#include<bits/stdc++.h>
using namespace std;
int total = 0, n, a[10], flag = 0;
int main(){
    for(int i = 0; i < 9; i++){
        cin >> n;
        a[i] = n;
        total += n;
    }
    total -= 100;

    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(a[i] + a[j] == total){
                a[i] = 100;
                a[j] = 100;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    sort(a, a + 9);
    for(int i = 0; i < 7; i++){
        cout << a[i] << '\n';
    }

    return 0;
}