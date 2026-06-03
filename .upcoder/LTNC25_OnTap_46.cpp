#include <bits/stdc++.h>
using namespace std;

int n, a[10], b[10];
bool used[10];

void Try(int idx){

    // BASE CASE - CANDIDATES - PRUNING - MAKE CHOICE - RECURSE

    // ① BASE CASE
    // idx == n means all n positions in b[] are filled
    // this is your "done" signal — print the result and stop this path
    if (idx == n){
        
        cout << "(";
        for (int i = 0; i < n; ++i){
            if (i > 0) cout << " ";
            cout << b[i];
        }
        cout << ")\n";
        return; // stop going deeper, backtrack up
    }

     // ② CANDIDATES
    // try every element in a[] as a candidate for position idx
    for (int i = 0; i < n; ++i){

        // ③ PRUNING — rule 1
        // if this element is already placed in b[], skip it
        // used[i] == true means a[i] is already on the current path
        if (used[i])
            continue;

        // ③ PRUNING — rule 2 (duplicate skip)
        // if a[i] == a[i-1] and a[i-1] is NOT currently used,
        // that means we already tried a[i-1] (same value) at this
        // position and backtracked — trying a[i] would produce
        // an identical permutation, so skip it
        // this only works because a[] is sorted beforehand
        if (i > 0 && a[i] == a[i-1] && !used[i-1])
            continue;

        // ④ MAKE CHOICE
        // mark a[i] as used so deeper calls won't pick it again
        // record a[i] as the value at position idx in our path b[]
        used[i] = true;
        b[idx] = a[i];

        // ⑤ RECURSE
        // move to the next position idx+1 with a[i] locked in
        Try(idx + 1);

        // ⑤ UNDO
        // remove a[i] from the path so we can try the next candidate
        // b[idx] doesn't need resetting — it gets overwritten next iteration
        used[i] = false;
    }
}
int main(){
    cin >> n;
    
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    sort(a, a + n);
    Try(0);
    return 0;
}
