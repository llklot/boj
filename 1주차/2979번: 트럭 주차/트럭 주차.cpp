/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2979                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kcy0712 <boj.kr/u/kcy0712>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2979                           #+#        #+#      #+#    */
/*   Solved: 2026/02/16 16:21:49 by kcy0712       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<bits/stdc++.h>
using namespace std;
int A, B, C;
int a, b, ret = 0;
int cnt[104];
int main(){
    cin >> A >> B >> C;
    for(int i = 0; i < 3; i++){
        cin >> a >> b;
        for(int j = a; j < b; j++)cnt[j]++;
    }
    for(int j = 1; j <= 100; j++){
        if(cnt[j]){
            if(cnt[j] == 1)ret += A;
            if(cnt[j] == 2)ret += B * 2;
            if(cnt[j] == 3)ret += C * 3;
        }
    }
    cout << ret << '\n';
    return 0;
}