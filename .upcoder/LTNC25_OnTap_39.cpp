#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    int pos = s1.find(s2);
    while (pos != -1){
        s1.erase(pos, s2.size());
        pos = s1.find(s2);
    }
    cout << s1;
    return 0;
}
