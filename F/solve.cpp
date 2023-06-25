#include <bits/stdc++.h>

using namespace std;

void solve(long long int x) {
    long long int a = 1, b;
    bool first = true;
    set<long long int> ans;
    while(a < x) {
        b = x + (a * a);
        long long int sqrt_b = sqrt(b);
        if(sqrt_b == sqrt(b))
            ans.insert(sqrt_b);
        a++;
    }
    cout << ans.size() << endl;
    for(auto ans_v : ans) {
        if(!first) cout << " ";
        first = false;
        cout << ans_v;
    }
    cout << endl;
}

int main() {
    long long int x;
    while(cin >> x) solve(x);
    return 0;
}