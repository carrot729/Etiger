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

const ll N = 1e4+9;
struct Tower {
    ll s, t;
};
bool cmp(const Tower& a, const Tower& b) {
    return a.s < b.s || a.s == b.s && a.t < b.t;
}
ll L, m;
vector<Tower> Tl;
void input() {
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    read(L); read(m);
    for (ll i = 0; i < m; i++) {
        Tower tmp; ll a = read(), r = read();
        tmp.s = a - r; tmp.t = a + r;
        Tl.push_back(tmp);
    }
    sort(Tl.begin(), Tl.end(), cmp);
}
void solve() {
    ll s = 0, ans = 0; 
    for (ll i = 0; i < m && s < L; i++) {
        for (ll j = i; j < m && Tl[j].s < s; j++) {
            if (Tl[j].t > Tl[i].t) i = j;
        }
        if (Tl[i].s >= s) break;
        s = Tl[i].t + 1; ans++;
    }
    if (s < L) printf("Impossible\n");
    else printf("%lld\n", ans);
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
