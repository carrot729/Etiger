#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N=1.5e3+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n, m;
typedef pair<ll, ll> P;
vector<P> g[N];
void input() {
//  freopen("longest.in","r",stdin);
//  freopen("longest.out","w",stdout);
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll u, v, cost;
        cin >> u >> v >> cost;
        P tmp; tmp.first = v; tmp.second = cost;
        g[u].push_back(tmp);
    }
}
vector<ll> dp(N, -1);
void DFS(ll node, ll father) {
    for (ll i = 0; i < g[node].size(); i++) {
        ll child = g[node][i].first, cost = g[node][i].second;
        dp[child] = max(dp[child], dp[node] + cost);
        DFS(child, node);
    }
}
void solve() {
    dp[n] = 0;
    DFS(n, 0);
    cout << dp[1] << endl;
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
