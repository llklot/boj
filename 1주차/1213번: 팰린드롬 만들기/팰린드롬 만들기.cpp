#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
string s, ret = "";
map <char, int> mp;
int main(){
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    for(auto p : mp){
        if(p.second % 2) cnt++;
    }
    if(cnt > 1) cout << "I'm Sorry Hansoo" << '\n';
    else{
        
    }
    return 0;
}