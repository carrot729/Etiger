#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 5e4 + 9;
ll n, m;
ll id[N * 2];
ll root(ll a) {return id[a] == a ? a : id[a] = root(id[a]);}
void unite(ll a, ll b) {id[root(a)] = root(b);}
int main() {
    // freopen("criminal5.in", "r", stdin);
    // freopen("criminal5.out", "w", stdout);
    scanf("%lld %lld", &n, &m);
    for (ll i = 1; i <= 2 * n; i++) 
        id[i] = i;
    for (ll i = 0; i < m; i++) {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        unite(a, b + n);
        unite(b, a + n);
        if (root(a) == root(a + n) or root(b) == root(b + n)) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}