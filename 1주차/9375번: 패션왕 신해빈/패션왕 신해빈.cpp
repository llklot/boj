#include<bits/stdc++.h>
using namespace std;
int tc, n;
string s1, s2;
int main(){
    cin >> tc;
    while(tc--){
        cin >> n;
        if(n == 0) cout << '0' << '\n';
        else{
            map <string, int> mp;
            for(int j = 0; j < n; j++){
                cin >> s1 >> s2;
                mp[s2]++;
            }
            long long ret = 1;
            for(auto p : mp) ret *= ((long long)p.second + 1);
            cout << ret - 1 << '\n';
        }
    }
    return 0;
}