#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "123456";
    vector<int> digits;
    for(int i = 0; i < s.length(); i++){
        int digit = s[i] - '0';
        digits.push_back(digit);
    }
    for(int i = 0; i < s.length(); i++){
        cout << digits[i] << " ";
    }
    return 0;
}