#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, c;
multiset<ll> w;

void input() {
    // freopen("friendship.in", "r", stdin);
    // freopen("friendship.out", "w", stdout);
    cin >> n >> c;
    for (ll i = 0; i < n; i++) {
        ll tmp; cin >> tmp; 
        w.insert(tmp);
    }
}

void solve() {
    ll ans = 0;
    while (!w.empty()) {
        multiset<ll>::iterator max_it = --w.end(); 
        ll max_val = *max_it;
        w.erase(max_it);          
        ans++;
        if (!w.empty() && c - max_val >= *w.begin()) {
            w.erase(w.begin());  
        }
        // cout << "HIHI" << endl;  
    }
    // cout << "HIHI11" << endl;
    cout << ans << endl;
}

int main() {
    input();
    solve();
    return 0;
}