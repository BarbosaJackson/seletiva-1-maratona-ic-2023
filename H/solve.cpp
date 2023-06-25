#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string, int> words;
    int ans = 0, n, size;
    string text;
    cin >> n;
    while(n--) {
        cin >> text;
        if(!words[text]){
            ans++;
            words[text] = 1;
            size = text.size();
            for(int i = 0; i < size; i++) {
                text = text[size - 1] + text;
                text.pop_back();
                words[text] = 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}