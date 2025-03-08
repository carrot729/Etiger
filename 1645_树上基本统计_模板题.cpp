#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n;
vector<ll> tree[N];
void input() {
    cin >> n;
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
}
vector<ll> pre(N), dpt(N), subcnt(N), subdpt(N);
void DFS1(ll node, ll father, ll height) {
    dpt[node] = height;
    for (ll i = 0; i < tree[node].size(); i++) {
        if (tree[node][i] == father) continue;
        pre[tree[node][i]] = node;
        DFS1(tree[node][i], node, height + 1);
    }
}
pair<ll, ll> DFS2(ll node) {
    bool isLeaf = 1;
    for (ll i = 0; i < tree[node].size(); i++) {
        if (dpt[tree[node][i]] > dpt[node])
            isLeaf = 0;
    }
    if (isLeaf) {
        subcnt[node] = 1;
        subdpt[node] = 1;
    }
    else {
        for (ll i = 0; i < tree[node].size(); i++) {
            if (dpt[tree[node][i]] >= dpt[node]){
                pair<ll, ll> tmp = DFS2(tree[node][i]);
                subcnt[node] += tmp.first;
                subdpt[node] = max(subdpt[node], tmp.second + 1);
            }
        }
        subcnt[node] ++;
    }
    pair <ll, ll> result;
    result.first = subcnt[node]; result.second = subdpt[node];
    return result;
}
void solve() {
    pre[1] = 0;
    DFS1(1, 0, 1);
    DFS2(1);
    for (ll i = 1; i <= n; i++) {
        printf("%lld %lld %lld %lld\n", pre[i], dpt[i], subcnt[i], subdpt[i]);
    }
    cout << endl;
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
