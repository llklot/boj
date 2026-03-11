#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "a";
    cout << "문자열: \"" << s << "\"" << '\n';
    // 문자열: "a"
    cout << "s.size() = " << s.size() << '\n';
    // s.size() = 1
    cout << "for 루프 시작 (int)s.size()-2를 조건으로 사용:" << endl;
    for(int i = 0; i < (int)s.size() - 2; i++){
        cout << "루프 반복: " << i << '\n';
    }
    return 0;
}