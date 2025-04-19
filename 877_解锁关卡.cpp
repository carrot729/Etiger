#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N=1e3+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n, m;
ll G[N][N];
ll in[N];
void input() {
//  freopen("game.in","r",stdin);
//  freopen("game.out","w",stdout);
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        if(G[b][a]) continue;
        G[b][a] = 1;
        in[a]++;
    }
}
bool vis[N];
void solve() {
    for (ll i = 1; i <= n; i++) {
        ll j = 1;
        for (j = 1; j <= n; j++) 
            if (!vis[j] && !in[j])
                break;
        cout << j << ' ';
        vis[j] = 1;
        for (ll k = 1; k <= n; k++) {
            if(G[j][k])
                in[k]--;
        }
    }
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
