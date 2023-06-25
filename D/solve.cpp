#include <bits/stdc++.h>
using namespace std;

const string ans[2] = {"No", "Yes"};

int main() {
    vector<int> A;
    A.resize(3);
    while(cin >> A[0] >> A[1] >> A[2]) {
        sort(A.begin(), A.end());
        cout << ans[A[1] - A[0] == A[2] - A[1]] << endl;
    }
    return 0;
}