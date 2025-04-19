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

const ll N = 1e2+9;
ll m, n = 26;
Vll2 ans(N, Vll(N, 0));
void input() {
//  freopen("inequality.in","r",stdin);
//  freopen("inequality.out","w",stdout);
    read(m);
    for (ll i = 0; i < m; i++) {
        string tmp;
        cin >> tmp;
        if (tmp[1] == '>') {
            ans[tmp[0] - 'a'][tmp[2] - 'a'] = 1;
        }
        else {
            ans[tmp[2] - 'a'][tmp[0] - 'a'] = 1;
        }
    }
}
void solve() {
    for (ll k = 0; k < n; k++)
        for (ll i = 0; i < n; i++)
            if(ans[i][k])
                for (ll j = 0; j < n; j++)
                    ans[i][j] = ans[i][j] || ans[k][j];
    for (ll i = 0; i < n; i++) {
        if (ans[i][i]) {
            printf("impossible\n");
            return;
        }
    }
    printf("possible\n");
    // for (ll i = 0; i < n; i++) {
    //     for (ll j = 0; j < n; j++) {
    //         cout << ans[i][j] << " \n"[j == n - 1];
    //     }
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
