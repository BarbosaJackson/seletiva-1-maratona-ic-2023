#include <bits/stdc++.h>

using namespace std;

void solve(int r, int c, int k) {
    vector<int> height;
    int h, points = 0;
    height.resize(r, 0);
    for(int i = 0; i < c; i++) {
        cin >> h;
        height[h - 1]--;
    }
    if(k >= r) {
        points = c;
    } else {
        sort(height.begin(), height.end());
        for(int i = 0; i < k; i++) {
            points -= height[i];
        }
    }
    cout << points << endl;
}

int main() {
    int r, c, k;
    while(cin >> r >> c >> k) solve(r, c, k);
    return 0;
}