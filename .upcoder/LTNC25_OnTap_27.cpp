#include <bits/stdc++.h>
using namespace std;
#define p push_back

bool snt(int n){
    if (n < 2) return false;
    else {
        for (int i = 2; i < n; i++){
            if (n % i == 0) return false;
        }
    }
    return true;
}

int main(){
    vector<int> a;
    int temp;
    while (cin >> temp){
        if (!snt(temp))
            a.p(temp);
    }
    sort(a.begin(), a.end());
    for (auto i : a) cout << i << " ";
    return 0;
}
