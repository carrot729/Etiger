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
typedef pair<ll, ll> Pll;

const ll N = 1e5+9;
ll C, n, G;
vector<Pll> t[N]; 
void input() {
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    read(C); read(n); read(G);
    for (ll i = 0; i < n; i++) {
        ll w = read(), v = read(), p = read();
        t[p].push_back(make_pair(w, v));
    }
}
Vll dp(N);
void bbDIV() {
    for (ll i = 0; i <= G; i++) {
        for (ll j = C; j >= 0; j--) {
            for (ll k = 0; k < t[i].size(); k++) {
                if (j >= t[i][k].first) {
                    dp[j] = max(dp[j], dp[j - t[i][k].first] + t[i][k].second);
                }
            }
        }
    }
}
void solve() {
    bbDIV();
    write(dp[C]);
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
