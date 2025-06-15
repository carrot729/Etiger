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

const ll N = 1e5+9;
ll nDays[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//               1   2   3   4   5   6   7   8   9   10  11  12  
string I2S(ll x) {
    stringstream tmp; string s;
    if (x < 10) tmp << 0;
    tmp << x; tmp >> s;
    return s;
}
string date1, date2;
void input() {
//  freopen("date.in","r",stdin);
//  freopen("date.out","w",stdout);
    cin >> date1 >> date2;
}
void solve() {
    ll ans = 0;
    for (ll m = 1; m <= 12; m++) {
        string mS = I2S(m);
        for (ll d = 1; d <= nDays[m]; d++) {
            string dS = I2S(d);
            string mdS = mS + dS;
            string yS = mdS;
            reverse(yS.begin(), yS.end());
            string date = yS + mdS;
            if (date1 <= date && date <= date2)
                ans++;
        }
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
