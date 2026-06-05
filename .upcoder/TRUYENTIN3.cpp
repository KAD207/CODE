#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    while (n > 0){
        string s;
        getline(cin, s);
        if (s.empty()) continue;
        
        cout << s[0];
      
        // isupper
        for (int i = 1; i < s.size(); i++){
            if (isupper(s[i]))
                cout << ' ';
            cout << s[i];
        }
        cout << '\n';
        n--;
    }
    
    return 0;
}
