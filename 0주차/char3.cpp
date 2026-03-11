#include<bits/stdc++.h>
using namespace std;
int main(){
    char a = '\0';
    char b = 0;
    //아스키코드 상에서 0은 널 문자임
    char c = NULL;
    string d = "";
    cout << "hello";
    
    if(a == b) cout << 1;
    if(b == c) cout << 1;
    //1은 1바이트 정수타입
    //'0'은 문자 0, 0은 아스키코드로 널 문자

    if(string(1, a) == d) cout << 1;
    //string(1, a) : char형인 a를 string으로 바꾸는 함수
    //이때 1은 a를 몇 번 반복할지 정함

    return 0;
}