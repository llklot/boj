#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {3, 1, 2, 100, 200};
    sort(a.begin(), a.end());
    do{
        for(int i = 0; i < 2; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
    }while(next_permutation(a.begin(), a.end()));
    return 0;
}