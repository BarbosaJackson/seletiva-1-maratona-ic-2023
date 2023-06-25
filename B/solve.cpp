#include <bits/stdc++.h>

using namespace std;

const string ans[2] = {"NO", "YES"};

int main() {
    int t, n, can;
    int count[257];
    string s;
    cin >> t;
    while(t--) {
        memset(count, 0, sizeof(count));
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> s;
            for(auto c : s) {
                count[c]++;
            }
        }
        can = 1;
        for(int i = 'a'; i <= 'z'; i++) {
            if(count[i] % n != 0){
                can = 0;
                break;                
            }
        }
        cout << ans[can] << endl; 
    }
    return 0;
}