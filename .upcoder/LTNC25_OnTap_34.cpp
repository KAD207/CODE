#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    // unique moves duplicates to the end and returns an iterator to the new end
    auto new_end = unique(s.begin(), s.end());
    
    // Erase the leftover duplicated junk at the end
    s.erase(new_end, s.end());
    
    // O(N) time
    cout << s;
    return 0;
}
