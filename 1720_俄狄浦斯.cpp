#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
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
vector<ll> x;
vector<ll> to[N];
void input() {
    cin >> n;
    x.push_back(0);
    for (ll i = 1; i <= n; i++){
        ll tmp;
        cin >> tmp;
        x.push_back(tmp);
    }
    for (ll i = 0; i < n - 1; i++) {
        ll a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
}
#define YES 1
#define NO 0
ll f[N][2];
void dfs(ll node, ll father) {
    f[node][YES] = x[node];
    f[node][NO] = 0;
    for (ll i = 0; i < to[node].size(); i++) {
        ll child = to[node][i];
        if (child == father)
            continue;
        dfs(child, node);
        f[node][YES] += f[child][NO];
        f[node][NO] += max(f[child][NO], f[child][YES]);
    }
}
void solve() {
    dfs(1, 0);
    cout << max(f[1][YES], f[1][NO]) << endl;
    // for (ll i = 1; i <= n; i++) 
    //     cout << f[i][YES] << " " <<f[i][NO] << endl; 
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
//  freopen("oedipus.in","r",stdin);
//  freopen("oedipus.out","w",stdout);
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
