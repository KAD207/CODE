#include <bits/stdc++.h>
#define p push_back
using namespace std;

int main(){
    string s;
    vector<string> v;
    while (cin >> s)
        v.p(s);
    
    reverse(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    
    return 0;
}
