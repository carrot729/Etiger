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

const ll N = 1e3+9;
struct E
{
    ll a, b, c;
};

ll n, m;
Vll x;
vector<E> El;
void input() {
//  freopen("conference.in","r",stdin);
//  freopen("conference.out","w",stdout);
    read(n); 
    x.push_back(0);
    for (ll i = 1; i <= n; i++) {
        x.push_back(read());
    }
    read(m);
    for (ll i = 0; i < m; i++) {
        ll a = read(), b = read(), c = read();
        El.push_back((E){a, b, c});
        El.push_back((E){b, a, c});
    }
}
Vll ans(N, INF);
void solve() {
    ans[1] = 0;
    while(1) {
        bool cgd = 0;
        for (ll i = 0; i < El.size(); i++) {
            if (ans[El[i].b] > ans[El[i].a] + El[i].c) {
                ans[El[i].b] = ans[El[i].a] + El[i].c;
                cgd = 1;
            }
        }
        if(!cgd)
            break;
    }
    ll sum = 0;
    for (ll i = 2; i <= n; i++) {
        if (ans[i] >= INF)
            continue;
        sum += ans[i] * x[i];
    }
    write(sum);
    // cout << endl;
    // for (ll i = 1; i <= n; i++) {
    //     printf("%lld ", ans[i]);
    // }
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
