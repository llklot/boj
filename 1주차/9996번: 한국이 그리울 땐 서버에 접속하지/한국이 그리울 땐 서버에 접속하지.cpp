/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9996                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kcy0712 <boj.kr/u/kcy0712>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9996                           #+#        #+#      #+#    */
/*   Solved: 2026/02/16 20:11:11 by kcy0712       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<bits/stdc++.h>
using namespace std;
int n;
string a, prefix, suffix, tmp;
int main(){
    cin >> n >> a;
    int cnt = a.find('*');
    prefix = a.substr(0, cnt);
    suffix = a.substr(cnt + 1);

    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(prefix.size() + suffix.size() > tmp.size()){
            cout << "NE" << '\n';
        }else{
            if(tmp.substr(0, prefix.size()) == prefix && tmp.substr(tmp.size() - suffix.size()) == suffix){
                cout << "DA" << '\n';
            }else cout << "NE" << '\n';
        }
    }
    return 0;
}