#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N=1e5+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll m, n;
vector<ll> anc(N);
void input() {
    scanf("%lld %lld", &m, &n);
    for (ll i = 0; i < n; i++)
        anc[i] = i;
}
ll root(ll node) {
    if (anc[node] == node)
        return node;
    else {
        return anc[node] = root(anc[node]);
    }
}
void inter(ll nodeA, ll nodeB) {
    if (root(nodeA) != root(nodeB))
        anc[root(nodeA)]=root(nodeB);
}
void solve() {
    for (ll i = 0; i < m; i++) {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        inter(a, b);
    }
    cout << (root(0) == root(1) ? "Yes" : "No") << endl;
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
// freopen("relation.in","r",stdin);
// freopen("relation.out","w",stdout);
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
