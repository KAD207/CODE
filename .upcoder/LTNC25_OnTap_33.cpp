#include <bits/stdc++.h>
using namespace std;

bool yes(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    string s;
    getline(cin, s);
    
    int cnt = 0;
    
    for (auto c : s){
        if (yes(c))
            cnt++;
    }
    cout << cnt;
    return 0;
}
