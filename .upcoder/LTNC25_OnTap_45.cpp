#include <bits/stdc++.h>
#define p push_back
#define po pop_back
using namespace std;

int n, a[101];
vector<int> cur;

void Try(int s, int k){
    // base case
    if (cur.size() == k){
        cout << "(";
        
        for (int i = 0; i < k; ++i){
            cout << cur[i];
            if (i + 1 < k)
                cout << " ";
        }
        
        cout << ")\n";
        return;
    }
    
    for (int i = s; i < n; ++i){
        cur.p(a[i]);
        Try(i + 1, k);
        cur.po();
    }
}
int main(){
    cin >> n;
    
    for (int i = 0; i < n; ++i){
        cin >> a[i];   
    }
    
    sort(a, a + n);
    
    cout << "()\n";
    for (int k = 1; k <= n; ++k){
        Try(0, k);
    }
    return 0;
}
