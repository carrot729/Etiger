#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
#define mod %
typedef long long ll;typedef unsigned long long ull;typedef string str;typedef vector<ll> Vll;typedef vector< vector<ll> > Vll2; 
inline ll read(){bool f=1;ll x=0;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=!f;ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}return(f?x:-x);}
inline void read(ll& num){bool f=1;ll x=0;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=!f;ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}num=(f?x:-x);}
inline void write(ll x){if(x<0)putchar('-'),x=-x;if(x>9)write(x/10);putchar(x%10+'0');return;}
void input();void solve();bool match1();void solve1();bool match2();void solve2();bool match3();void solve3();

const ll N = 2e5+9;
ll n, m, k, V;
Vll b1(N), b2(N), b3(N);
Vll v1(N), v2(N), v3(N);
Vll a(N);
void input() {
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    read(n); read(m); read(k); read(V);
    for (ll i = 1; i <= n; i++)
        read(b1[i]);
    for (ll i = 1; i <= m; i++) 
        read(b2[i]);
    for (ll i = 1; i <= k; i++)
        read(b3[i]);
    for (ll i = 1; i <= n; i++)
        read(v1[i]);
    for (ll i = 1; i <= m; i++) 
        read(v2[i]);
    for (ll i = 1; i <= k; i++)
        read(v3[i]);
    for (ll i = 1; i <= k; i++)
        read(a[i]);
}
Vll dp(N);
void bb01(ll w, ll v) {
    for (ll i = V; i >= w; i--) {
        dp[i] = max(dp[i], dp[i - w] + v);
    }
}
void bbINF(ll w, ll v) {
    for (ll i = w; i <= V; i++) {
        dp[i] = max(dp[i], dp[i - w] + v);
    }
}
void bbM(ll w, ll v, ll cnt) {
    for (ll k = 1; k <= cnt; cnt -= k, k *= 2)
        bb01(w * k, v * k);
    if (cnt) 
        bb01(w * cnt, v * cnt);
}
void solve() {
    for (ll i = 1; i <= n; i++) 
        bbINF(b1[i], v1[i]);
    for (ll i = 1; i <= m; i++)
        bb01(b2[i], v2[i]);
    for (ll i = 1; i <= k; i++)
        bbM(b3[i], v3[i], a[i]);
    write(dp[V]);
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
