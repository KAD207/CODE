#include <bits/stdc++.h>
#define p push_back
using namespace std;

// crucial vars
int m, n, startX, startY;
string target;
vector<vector<char>> grid;
vector<vector<bool>> visited;
vector<pair<int, int>> path;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool dfs(int x, int y, int idx){

  // base case
    if (idx == (int) target.size()) return true;
    if (x < 0 || x >= n || y < 0 || y >= m) return false;
    if (visited[x][y]) return false;
    if (grid[x][y] != target[idx]) return false;
    
    visited[x][y] = true;
    path.p({x, y});

  // choice
    for (int i = 0; i < n; i++){
        if (dfs(x + dx[i], y + dy[i], idx + 1))
            return true;
    }

  // return everything back to how it was
    path.pop_back();
    visited[x][y] = false;
  
    return false;
}

int main(){
    cin >> n >> m >> startX >> startY;
    cin >> target;
    
    grid.assign(n, vector<char>(m));
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    
    visited.assign(n, vector<bool>(m, false));
    
    if (dfs(startX, startY, 0)){
        cout << "THANH CONG\n";
        for (auto& p : path){
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    } else cout << "THAT BAI\n";
    return 0;
}
