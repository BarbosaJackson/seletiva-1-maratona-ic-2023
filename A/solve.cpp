#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr) {
    int count[10];
    string ans = "No";
    memset(count, 0, sizeof(count));
    for(auto x : arr) {
        count[x]++;
    }
    for(int i = 0; i < 10; i++)
        if(count[i] == 2)
            ans = "Yes";
    cout << ans << endl;
}

int main() {
    vector<int> arr;
    arr.resize(3);
    while(cin >> arr[0] >> arr[1] >> arr[2])
        solve(arr);
    return 0;
}