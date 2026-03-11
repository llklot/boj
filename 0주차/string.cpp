#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "나는야";
    cout << a[0] << '\n';
    //a[0], a[1]는 0번쨰, 1번째 1바이트씩 출력한다는 의미
    //영어는 한 글자당 1바이트지만 한글은 한 글자당 3바이트라서 이상하게 출력됨
    cout << a[0] << a[1] << a[2] << '\n';
    cout << a << '\n';
    string b = "abc";
    cout << b[0] << '\n';
    cout << b << '\n';

    return 0;
}