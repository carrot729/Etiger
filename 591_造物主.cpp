#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N=5e2+9;
const ll M=2.5e5+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
struct line{
    ll a, b, y;
};
ll n, m;
vector<line> L;
vector<string> S(N);
vector<ll> id(N);
ll change(string a, string b) {
    vector<bool> tmp(100);
    ll ans = 0;
    for (ll i = 0; i < 5; i++) {
        if (!tmp[a[i]]) {
            ans++;
            tmp[a[i]] = 1;
        }
        if (!tmp[b[i]]) {
            ans++;
            tmp[b[i]] = 1;
        }
    }
    return ans;
}
bool cmp(const line& a, const line& b) {
    return a.y < b.y;
}
ll root(ll node) {
    if (id[node] != node)
        id[node] = root(id[node]);
    return id[node];
}
void unite(ll a, ll b) {
    id[root(a)] = root(b);
}
void input() {
//  freopen("creator.in","r",stdin);
//  freopen("creator.out","w",stdout);
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> S[i];
        sort(S[i].begin(), S[i].end());
        id[i] = i;
    }
    for (ll i = 1; i < n; i++) {
        for (ll j = i + 1; j <= n; j++) {
            line tmp;
            tmp.a = i;
            tmp.b = j;
            tmp.y = change(S[i], S[j]);
            L.push_back(tmp);
            m++;
        }
    }
    sort(L.begin(), L.end(), cmp);
}
void solve() {
    ll ans = 0, cnt = 0;
    for (ll i = 0; i < L.size(); i++) {
        if (cnt >= n - 1)
            break;
        if(root(L[i].a) == root(L[i].b))
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
