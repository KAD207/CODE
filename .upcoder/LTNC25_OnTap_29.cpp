#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, ans = 0;
    cin >> n >> m;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for (int i = 0; i < m; i++){
        cin >> x;
        // tim gia tri x trong vector, neu x == vt cuoi cung thi ans++
        if (find(v.begin(), v.end(), x) == v.end())
            ans++;
    }
    cout << ans;
    return 0;
}
