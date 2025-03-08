#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=2e1+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n;
vector<ll> tree[N];
void input() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
}
set <ll> vst;
vector <ll> ans(N+9);
void DFS(ll node, ll height) {
    // printf ("%lld , %lld\n",node,height);
    ans[node] = height;
    vst.insert(node);
    for (ll i = 0; i < tree[node].size(); i++) {
        if (vst.count(tree[node][i]))
            continue;
        DFS(tree[node][i],height + 1);
    }
}
void solve() {
    DFS(1,1);
    for (ll i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i==n];
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
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
