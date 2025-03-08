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
//  freopen("transportation.in","r",stdin);
//  freopen("transportation.out","w",stdout);
    cin >> m >> n;
    for (ll i = 1; i <= m; i++)
        anc[i] = i;
}
ll root(ll node) {
    if (anc[node] != node)
        anc[node] = root(anc[node]);
    return anc[node];
}
void inter(ll nodeA, ll nodeB) {
    anc[root(nodeA)] = root(nodeB);
}
void solve() {
    ll lost = m;
    for (ll i = 1; i <= n; i++) {
        ll a, b;
        cin >> a >> b;
        if (root(a) != root(b)) {
            inter(a, b);
            lost--;
        }
        if (lost <= 1){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
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
