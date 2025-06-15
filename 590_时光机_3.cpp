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
struct E {
    ll a, b, c;
};
vector<E> EL;
const ll N = 5e2+9;
ll n, p, m;
void input() {
//  freopen("timemachine.in","r",stdin);
//  freopen("timemachine.out","w",stdout);
    read(n); read(p); read(m);
    for (ll i = 0; i < p; i++) {
        ll a = read(), b = read(), c = read();
        EL.push_back((E){a, b, -c});
    }
    for (ll i = 0; i < m; i++) {
        ll a = read(), b = read(), c = read();
        EL.push_back((E){a, b, c});
        EL.push_back((E){b, a, c});
    }
}
Vll ans(N, INF);
void solve() {
    bool cgd = 1;
    for (ll k = 0; k < n; k++) {
        cgd = 0;
        for (ll i = 0; i < EL.size(); i++) {
            if (ans[EL[i].a] > ans[EL[i].b] + EL[i].c) {
                cgd = 1;
                ans[EL[i].a] = ans[EL[i].b] + EL[i].c;
            }
        }
        if (!cgd)
            break;
    }
    if (!cgd)
        printf("No");
    else
        printf("Yes");
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
