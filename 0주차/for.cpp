#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {1,2,3};
    for(int b : a) cout << b << '\n';
    //for({타입} {임시변수명} : {타입을 담은 컨테이너})
    for(int i = 0; i < a.size(); i++) cout << a[i] << '\n';
    return 0;
}