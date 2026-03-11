#include<bits/stdc++.h>
using namespace std;
int n, cnt = 0;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;

        stack<char> st;
        st.push(s[0]);
        for(int j = 1; j < s.size(); j++){
            if(!st.empty() && st.top() == s[j])
                st.pop();
            else 
                st.push(s[j]);
        }
        if(st.size() == 0)cnt++;
    }
    cout << cnt << '\n';
    return 0;
}