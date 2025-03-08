#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
#define USE_FILEIO
typedef long long ll;
typedef string str;
typedef ll INT_TYPE ;
inline INT_TYPE read() {
    INT_TYPE x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9')
        x=x*10+ch-'0',ch=getchar();
    return x*f;
}
void write(INT_TYPE x)
{
    if(x<0)
        putchar('-'),x=-x;
    if(x>9)
        write(x/10);
    putchar(x%10+'0');
    return;
}

const ll N=1e5+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();

ll n;
vector<ll> to[N];
void input() {
    cin >> n;
    for (ll i = 0; i < n - 1; i++) {
        ll a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    // cout << "HIHIHI" <<endl;
}
vector<ll> sz(N),f(N),g(N);
void dfsFA(ll node, ll father) {
    // cout << node <<endl;
    sz[node] = 1;
    for (ll i = 0; i < to[node].size(); i++) {
        ll child = to[node][i];
        if (child == father)
            continue;
        dfsFA(child, node);
        sz[node] += sz[child];
    }
}
void solve() {
    // cout << "HIHIHI1" <<endl;
    dfsFA(1, 0);
    for (ll node = 1; node <= n; node++) {
        for (ll i = 0; i < to[node].size(); i++) {
            ll child = to[node][i];
            if (sz[child] >= sz[node])
                continue;
            f[node] = max(f[node], sz[child]);
        }
    }
    for (ll node = 1; node <= n; node++) {
        g[node] = max(f[node], n - sz[node]);
    }
    // for (ll node = 1; node <= n; node++) {
    //     cout <<g[node] <<endl;
    // }
    cout << min_element(g.begin() + 1, g.begin() + n + 1) - g.begin() << " " << *min_element(g.begin() + 1, g.begin() + n + 1) <<endl;
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
// freopen("bomb5.in","r",stdin);
// freopen("bomb5.out","w",stdout);
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
