#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N = 1e2+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n;
vector<ll> a(N);
void input() {
//  freopen("cards.in","r",stdin);
//  freopen("cards.out","w",stdout);
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
}
void solve() {
    ll ans = 0;
    ll ave, tmp = 0;
    for (ll i = 1; i <= n; i++) {
        tmp += a[i];
    } ave = tmp / n;
    for (ll i = 1; i < n; i++) {
        if (a[i] != ave) {
            a[i + 1] -= ave - a[i];
            ans++;
        }
    }
    cout << ans << endl;
}
bool match1() {
    ll tmp = 0;
    for (ll i = 1; i <= n; i++)
        tmp += a[i];
    return tmp % n;
}
void solve1() {
    cout << -1 << endl;
}
bool match2() {
    for (ll i = 2; i <= n; i++)
        if (a[i] != a[1])
            return 0;
    return 1;
}
void solve2() {
    cout << 0 << endl;
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
