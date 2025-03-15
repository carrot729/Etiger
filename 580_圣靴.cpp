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
vector<stone> SL;
bool cmp(const stone& a, const stone& b) {
    return a.t * a.d > b.t * b.d;
}
void input() {
//  freopen("sandal.in","r",stdin);
//  freopen("sandal.out","w",stdout);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        stone tmp; 
        ll t, d; cin >> t >> d;
        tmp.t = t; tmp.d = d;
        SL.push_back(tmp);
    }
    sort(SL.begin(), SL.end(), cmp);
}
vector<ll> sT;
void solve() {
    ll ans = 0;
    sT.push_back(SL[0].t);
    for (ll i = 1; i < n; i++) {
        sT.push_back(sT[i - 1] + SL[i].t);
    }
    for (ll i = 0; i < n - 1; i++) {
        ans += SL[i].d * sT[i] * 2;
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
