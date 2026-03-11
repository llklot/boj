#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "love is";
    a += " pain!";
    a.pop_back();
    //문자열 끝을 지움
    cout << a << " : " << a.size() << '\n';
    cout << char(* a.begin()) << '\n';
    cout << char(* (a.end() - 1)) << '\n';
    //end()는 문자열의 마지막 요소 그 다음을 가리키는 이터레이터 반환
    a.insert(0, "test ");
    cout << a << " : " << a.size() << '\n';
    a.erase(0, 5);
    //erase(위치,크기)
    cout << a << " : " << a.size() << '\n';
    auto it = a.find("love");
    //fine(문자열)은 특정 문자열을 찾아 위치 반환
    //못 찾으면 string:npos 반환
    if (it != string::npos){
        cout << "포함되어 있다." << '\n';
    }
    cout << it << '\n';
    cout << string::npos << '\n';
    cout << a.substr(5, 2) << '\n';
    //substr(위치,크기)은 특정 위치에서 크기만큼의 문자열 추출
    return 0;
}
/*
love is pain : 12
l
n
test love is pain : 17
love is pain : 12
포함되어 있다.
0
184467440~
is
*/