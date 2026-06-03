#include <bits/stdc++.h>
using namespace std;

int cnt[127];

int main(){
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++){
        ++cnt[s[i]];
    }
    
    int max = 0;
    char res = 0;
    for (int i = 0; i < 127; i++){
        if (cnt[i] > max){
            max = cnt[i];
            res = i;
        }
        else if (cnt[i] == max && i < res){
            res = i;
        }
    }
    cout << res << ' ' << max;
    return 0;
}
