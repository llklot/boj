#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int arr[10];

    cout << "int의 크기: " << sizeof(int) << " 바이트" << '\n';
    cout << "a의 크기: " << sizeof(a) << " 바이트" << '\n';
    cout << "arr 배열의 전체 크기: " << sizeof(arr) << " 바이트" << '\n';
    cout << "arr 배열의 요소 개수: " << sizeof(arr) / sizeof(arr[0]) << '\n';
    return 0;
}