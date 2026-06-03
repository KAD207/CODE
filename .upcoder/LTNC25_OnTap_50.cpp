#include <bits/stdc++.h>
#define p push_back
using namespace std;

int n, a[10][10], ans;
string cur = "";

int dx[] = {1, 0};
int dy[] = {0, 1};

void Try(int x, int y){
    cur.p(a[x][y] + '0');

    // base case, stoi means string to integer
    if (x == n && y == n){
        ans = max(ans, stoi(cur, nullptr, 2));
        return;
    }
    
    for (int i = 0; i < 2; i++){
        int u = x + dx[i];
        int v = y + dy[i];
        
        if (u <= n && v <= n && a[u][v] != -1){
            Try(u, v);
            cur.pop_back();
        }
    }
}

int main(){
    cin >> n;
    
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            cin >> a[i][j];
        }
    }

    // why 1,1?
    Try(1, 1);
    cout << ans;
    return 0;
    
}
