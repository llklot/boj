#include <bits/stdc++.h>
using namespace std;
string a;
int cnt[26];
int main(){
    cin >> a;

    for(int i = 0; i < a.size(); i++){
        int idx = a[i] - 'a';
        cnt[idx]++;
    }

    for(int i = 0; i < 26; i++){
        cout << cnt[i] << ' ';
    }
    cout << '\n';
    return 0;
}
/*
1. 문자열, 알파벳 정의
2. 문자열 입력받기
3. 문자열 0부터 끝까지 읽으면서 알파벳 배열에 +1
4. 출력
*/