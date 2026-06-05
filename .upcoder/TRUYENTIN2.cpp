#include <bits/stdc++.h>
using namespace std;

#define p push_back

int decimal(string s){
    int res = 0;
    
    for (char c : s){
        res = res * 2 + (c - '0');
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    while(n--){
        string ip;
        cin >> ip;
        
        // splitting
        stringstream ss(ip);
        string part;
        vector<int> a;
        
        // read the ss as a new part, excludes the . in between
        while(getline(ss, part, '.')){
            a.p(decimal(part));
        }
        
        // if i > 0 then cout .
        for (int i = 0; i < 4; i++){
            if (i > 0) cout << ".";
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
