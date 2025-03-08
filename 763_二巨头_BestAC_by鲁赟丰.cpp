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
ll n, T;
vector<ll> to[N];
vector<ll> fa(N);
void dfsFA(ll node, ll father) {
    fa[node] = father;
    for (ll i = 0; i < to[node].size(); i++) {
        ll child = to[node][i];
        if (child == father)
            continue;
        // cout << node << endl;
        dfsFA(child, node);
        
    }
}
void input() {
    cin >> n >> T;
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        to[u].push_back(v);
        to[v].push_back(u);
    }
    // for (ll i = 1; i <= n; i++) {
    //     for (ll j = 0; j < to[i].size(); j++) {
    //         cout <<to[i][j] <<" \n"[j==to[i].size()-1];
    //     }
    // }
    dfsFA(1, 0);
    // for (ll i = 1; i <= n; i++)
    //     cout << fa[i] << " \n"[i==n];
}

void solve() {
    ll x, y, z;
    cin >> x >> y >> z;
    if (x == y) {
        cout << 0 <<endl;
        return;
    }
    vector<ll> xList, yList;
    ll tmpx = x, tmpy = y;
    while (tmpx != 0) {
        xList.push_back(tmpx);
        tmpx = fa[tmpx];
    } ;
    while (tmpy != 0) {
        yList.push_back(tmpy);
        tmpy = fa[tmpy];
    } ;
    if (count(xList.begin(), xList.end(), y) or count(yList.begin(), yList.end(), x)) {
        cout << labs(ll(xList.size()) - yList.size()) << endl;
        return;
    }
    ll tmp = 0;
    while (xList[xList.size() - tmp - 1] == yList[yList.size() - tmp - 1]) tmp++;
    cout << xList.size() + yList.size()  - 2 * tmp << endl;
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
// freopen(".in","r",stdin);
// freopen(".out","w",stdout);
	input();
    for (ll i = 0; i < T; i++) {
        if(match1()) solve1();
        elif(match2()) solve2();
        elif(match3()) solve3();
        else solve();
    }
	return 0;
}
