#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8

typedef long long ll;typedef unsigned long long ull;typedef string str;typedef vector<ll> Vll;typedef vector< vector<ll> > Vll2; 
inline ll read(){bool f=1;ll x=0;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=!f;ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}return(f?x:-x);}
inline void read(ll& num){bool f=1;ll x=0;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=!f;ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}num=(f?x:-x);}
inline void write(ll x){if(x<0)putchar('-'),x=-x;if(x>9)write(x/10);putchar(x%10+'0');return;}
void input();void solve();bool match1();void solve1();bool match2();void solve2();bool match3();void solve3();

const ll N = 1e3+9;
ll n;
Vll2 w(N, Vll(N, 0));
Vll ans(N, INF);
vector<bool> ok(N, 0);
void input() {
//  freopen("meeting.in","r",stdin);
//  freopen("meeting.out","w",stdout);
    n = read();
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            w[j][i] =( i * 666 + j * j ) % 233;
        }
    }
}
void solve() {
    ans[1] = 0;
    for (ll k = 0; k < n; k++) {
        ll u = n + 1;
        for (ll i = 1; i <= n; i++) {
            if (!ok[i] && ans[i] < ans[u])
                u = i;
        }
        ok[u] = 1;
        for (ll i = 1; i <= n; i++) {
            ans[i] = min(ans[i], ans[u] + w[u][i]);
        }
    }
    ll sum = 0;
    for (ll i = 1; i <= n; i++) {
        sum += ans[i];
    }
    write(sum);
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
