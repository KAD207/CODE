#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
// 1. set v[0] to 1, v[1] to 2, v[2] to 3 for std::next_permutation or sorting 1st
    for (int i = 0; i < n; i++){
        v[i] = i+1;
    }
    
// 2. looping thru every single permutation, basically rearrange to the next element after looping
    do {
        for (int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    
    
    return 0;
}
