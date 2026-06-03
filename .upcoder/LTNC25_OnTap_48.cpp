#include <bits/stdc++.h>
using namespace std;

int n;

void Try(string cur, int open, int close){
    // base case
    if (cur.size() == n * 2){
        
        cout << cur << "\n";
        return;
    }
    
    if (open < n)
        Try(cur + "(", open + 1, close);
    
    if (close < open)
        Try(cur + ")", open, close + 1);
}

int main(){
    cin >> n;
    Try("", 0, 0);
    
    return 0;
}
