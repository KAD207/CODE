#include <bits/stdc++.h>
using namespace std;

void pld(string s){
    string ans = "";
    
    for (auto c : s){
        if (c != ' '){
            ans += tolower(c);
        }
    }
    
    int left = 0, right = ans.size() - 1;
    bool ok = true;
    while (left < right){
        if (ans[left] != ans[right]){
            ok = false;
            break;
        }
        left++;
        right--;
    }
    if (ok) cout << "YES";
    else cout << "NO";
}

int main(){
    string s;
    getline(cin, s);
    pld(s);
    return 0;
}
