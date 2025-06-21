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
struct War {
    double begin, end;
    ll r;
};
War make_war() {
    War tmp; string s; 
    cin >> s >> tmp.r;
    tmp.begin += (s[0] - '0') * 1e1;
    tmp.begin += (s[1] - '0') * 1e0;
    tmp.begin += (s[3] - '0') * 1e-1;
    tmp.begin += (s[4] - '0') * 1e-2;
    tmp.end += (s[6] - '0') * 1e1;
    tmp.end += (s[7] - '0') * 1e0;
    tmp.end += (s[9] - '0') * 1e-1;
    tmp.end += (s[10] - '0') * 1e-2;
    return tmp;
}
bool cmp(const War& a, const War& b) {
    return a.begin < b.begin || a.begin == b.begin && a.end < b.end;
}
ll n;
vector<War> Wl;
void input() {
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    scanf("%lld", &n);
    for (ll i = 0; i < n; i++) {
        War tmp = make_war(); 
        Wl.push_back(tmp);
    }
}
void solve() {
    ll s = 0, ans = 0; 
    for (ll i = 0; i < n && s < ; i++) {
        for (ll j = i; j < m && Wl[j].s < s; j++) {
            if (Wl[j].t > Wl[i].t) i = j;
        }
        if (Wl[i].s >= s) break;
        s = Wl[i].t + 1; ans++;
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
