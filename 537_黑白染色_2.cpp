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
string s;
ll n;
void input() {
//  freopen("color.in","r",stdin);
//  freopen("color.out","w",stdout);
    cin >> s;
    n = s.size();
}
Vll sw1(N), sw2(N), sb1(N), sb2(N);
void solve() {
    sw1[0] = s[0] == 'W';
    sb1[0] = s[0] == 'B';
    sw2[n - 1] = s[n - 1] == 'W';
    sb2[n - 1] = s[n - 1] == 'B';
    for (ll i = 1; i < n; i++) {
        sw1[i] += sw1[i - 1];
        sb1[i] += sb1[i - 1];
        sw2[n - 1 - i] += sw2[n - i];
        sb2[n - 1 - i] += sb2[n - i];
        if (s[i] == 'W') sw1[i]++; else sb1[i]++;
        if (s[n - 1 - i] == 'W') sw2[n - 1 - i]++; else sb2[n - 1 - i]++;
    }
    ll ans = INF;
    for (ll i = 0; i < n; i++) {
        ans = min(ans, (sw1[i] ? sw1[i] : 1) + (sb2[i + 1] ? sb2[i] : 1));
        ans = min(ans, (sw2[i] ? sw1[i] : 1) + (sb1[i + 1] ? sb2[i] : 1));
    }
    write(ans);
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
