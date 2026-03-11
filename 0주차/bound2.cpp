#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a {1, 2, 3, 3, 3, 4};
    cout << &*lower_bound(a.begin(), a.end(), 3) << '\n';
    cout << &*upper_bound(a.begin(), a.end(), 3) << '\n';
    cout << &*(a.begin() + 2) << '\n';
    cout << &*(a.begin() + 5) << '\n';
    return 0;
}