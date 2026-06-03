#include <bits/stdc++.h>
using namespace std;

bool scp(int n){
    int a = sqrt(n);
    return true ? a*a == n : false;
}

int main(){
    int n;
    int cnt = 0;
    while (cin >> n) {
        if (scp(n))
            cnt++;
    }
    cout << cnt;
    return 0;
}
