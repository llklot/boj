/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1159                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kcy0712 <boj.kr/u/kcy0712>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1159                           #+#        #+#      #+#    */
/*   Solved: 2026/02/16 17:24:42 by kcy0712       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<bits/stdc++.h>
using namespace std;
int n, tf = 0;
int cnt[26];
string s;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        cnt[s[0] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(cnt[i] >= 5){
            cout << (char)(i + 'a');
            tf = 1;
        }
    }
    if(tf == 0)cout << "PREDAJA" << '\n';
    return 0;
}