#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000009

typedef long long ll;

bitset<MAXN> bs;
vector<ll> primes;
set<ll> factors;

void crivo(ll n) {
    ll sieve_size = n + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for(ll i = 2; i <= sieve_size; i++) {
        if(bs[i]) {
            for(ll j = i * i; j <= (ll)sieve_size; j += i) {
                bs[j] = 0;
            }
            primes.push_back(i);
        }
    }
}

void primeFactors(ll n) {
    ll PF_idx = 0, PF = primes[PF_idx];
    while(PF * PF <= n) {
        while(n % PF == 0) {
            n /= PF;
            factors.insert(PF);
        }
        PF = primes[++PF_idx];
    }
    if(n != 1) factors.insert(n);
}

void solve(int n) {
    ll A, B;
    while(n--) {
        factors.clear();
        cin >> A >> B;
        primeFactors(A);
        primeFactors(B);
        cout << factors.size() << endl;
    }
}

int main() {
    int n;
    crivo(1000000);
    while(cin >> n)
        solve(n);
    return 0;
}