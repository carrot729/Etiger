#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N=1e2+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n, m;
struct line
{
    ll a, b, y;
};
bool cmp(const line& a, const line& b) {
    return a.y > b.y;
}
vector<line> L;
vector<ll> id(N);
ll root(ll node) {
    if (id[node] != node) {
        id[node] = root(id[node]);
    }
    return id[node];
}
void unite(ll a, ll b) {
    id[root(a)] = root(b);
}
void input() {
//  freopen("bridge.in","r",stdin);
//  freopen("bridge.out","w",stdout);
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        line tmp;
        cin >> tmp.a >> tmp.b >> tmp.y;
        L.push_back(tmp);
    }
    sort(L.begin(), L.end(), cmp);
    for (ll i = 1; i <= n; i++) {
        id[i] = i;
    }
}
void solve() {
    ll ans = 0, cnt = 0;
    for (ll i = 0; i < L.size(); i++) {
        if (cnt >= n - 1)
            break;
        if (root(L[i].a) == root(L[i].b))
            continue;
        unite(L[i].a, L[i].b);
        ans += L[i].y;
    }
    cout << ans << endl;
}
bool match1() {
    return 0;
}
void solve1() {
    solve();
}
bool match2() {
    return 0;
}
void solve2() {
    solve();
}
bool match3() {
    return 0;
}
void solve3() {
    solve();
}
int main(){
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
