#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1, 2, 3, 4};
    int a = *min_element(v.begin(), v.end());
    auto b = min_element(v.begin(), v.end());
    cout << a << '\n';
    cout << (int)(b - v.begin()) << '\n';
    return 0;
}