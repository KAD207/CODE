#include <bits/stdc++.h>
#define p push_back
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    while (n > 0){
        string s;
        getline(cin, s);
        if (s.empty()) continue;
        
        vector<string> a;
        string cur = "";
        
        for (char c : s){
            if (isdigit(c))
                cur += c;
            else{
                if (!cur.empty())
                    a.p(cur);
                    cur = "";
            }
        }
        
        if (!cur.empty()) a.p(cur);
        
        for (int i = 0; i < a.size(); i++){
            if (i > 0) cout << " ";
            cout << a[i];
        }
        cout << '\n';
        n--;
    }
    
    return 0;
}
