#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "abc";
    a += "d";
    //빠름
    a = a + "d";
    //느림
    cout << a << '\n';
    return 0;
}