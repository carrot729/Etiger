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
struct stone
{
    ll t, d;
};
ll n;
stone SL[N];
bool cmp(const stone& a, const stone& b) {
    return a.t * b.d < b.t * a.d;
}
void input() {
//  freopen("sandal.in","r",stdin);
//  freopen("sandal.out","w",stdout);
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> SL[i].t >> SL[i].d;
    }
    sort(SL + 1, SL + 1 + n, cmp);
}
vector<ll> sT(N);
void solve() {
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        sT[i] = sT[i - 1] + SL[i].t;
    }
    for (ll i = 1; i <= n; i++) {
        ans += SL[i].d * sT[i - 1] * 2;
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
