#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100];

void Try(int s, int cnt){
    
    if (cnt == k){
        
        cout << "(";
        for (int i = 0; i < k; i++){
            if (i > 0) cout << " ";
            cout << b[i];
        }
        cout << ")\n";
        return;
    }

    // be careful here, i = first int then assign values from the second array into the first array then recurse
    for (int i = s; i < n; i++){
        b[cnt] = a[i];
        Try(i + 1, cnt + 1);
    }
}

int main(){
    cin >> n >> k;
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    Try(0, 0);
    return 0;
}
