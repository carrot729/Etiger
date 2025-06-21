#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 9;
struct Fight {ll a, b, c;} Fl[N];
bool cmp(const Fight& a, const Fight& b) {return a.c > b.c;}
ll n, m;
ll id[N * 2];
ll root(ll a) {return id[a] == a ? a : id[a] = root(id[a]);}
void unite(ll a, ll b) {id[root(a)] = root(b);}
int main() {
    // freopen("prison.in", "r", stdin);
    // freopen("prison.out", "w", stdout);
    scanf("%lld %lld", &n, &m);
    for (ll i = 1; i <= 2 * n; i++) 
        id[i] = i;
    for (ll i = 0; i < m; i++)
        scanf("%lld %lld %lld", &Fl[i].a, &Fl[i].b, &Fl[i].c);
    sort(Fl, Fl + m, cmp);
    for (ll i = 0; i < m; i++) {
        unite(Fl[i].a, Fl[i].b + n);
        unite(Fl[i].b, Fl[i].a + n);
        if (root(Fl[i].a) == root(Fl[i].a + n)) {
            printf("%lld\n", Fl[i].c);
            return 0;
        }
        if (root(Fl[i].b) == root(Fl[i].b + n)) {
            printf("%lld\n", Fl[i].c);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}