#include <bits/stdc++.h>
using namespace std;
void printConstRef(const int& x){
    //x = 100;
    cout << x;
}
int main(){
    int x = 10;
    printConstRef(x);
    return 0;
}