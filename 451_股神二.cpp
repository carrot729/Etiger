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
ll n; 
vector<ll> x;
void input() {
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    x.push_back(0);
    read(n);
    for (ll i = 1; i <= n; i++) {
        x.push_back(read());
    }
}
Vll dp1(N), dp2(N);
void solve() {
    dp1[1] = x[1]; dp2[n] = x[n];
    for (ll i = 2; i <= n; i++) {
        dp1[i] = dp1[i - 1] + x[i] > 0 ? dp1[i - 1] + x[i] : dp1[i - 2];
    }
    for (ll i = n - 1; i <= 1; i--) {
        dp2[i] = dp2[i + 1] > 0 ? dp2[i + 1] + x[i] : x[i];
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
