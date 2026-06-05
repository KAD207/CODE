#include <bits/stdc++.h>
#define p push_back
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    while (n--){
        string line;
        do{
            getline(cin, line);
        } while (line.empty());
        
        istringstream iss(line);
        vector<int> nums, even, odd;
        
        int x;
        while (iss >> x){
            nums.p(x);
        }
        
        for (int v : nums){
            if (v % 2 == 0) even.p(v);
            else odd.p(v);
        }
        
        // can input a function into the sort function
        sort(even.begin(), even.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        
        sort(odd.begin(), odd.end(), [](int a, int b){
            return abs(a) > abs(b);
        });
        
        bool first = true;
        for (int v : even){
            if (!first) cout << ' ';
            cout << v;
            first = false;
        }
        for (int v : odd){
            if (!first) cout << ' ';
            cout << v;
            first = false;
        }
        cout << '\n';
    }
    return 0;
}
