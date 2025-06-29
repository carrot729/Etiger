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

const ll N = 1e1+9;
const ll R = 10;
const ll C = 9;
ll dr[] = {-2, -2, -1, 1, 2, 2, 1, -1};
ll dc[] = {1, -1, -2, -2, -1, 1, 2, 2};
ll r1, c1, r2, c2;
struct Node {
    ll r, c;
    
};
Node node(ll r, ll c){
    Node tmp;
    tmp.r = r;
    tmp.c = c;
    return tmp;
}
void input() {
//  freopen("horse.in","r",stdin);
//  freopen("horse.out","w",stdout);
    read(r1);
    read(c1);
    read(r2);
    read(c2);
}
Vll2 ans(N, Vll(N, 0));
vector<vector<bool> > vis(N, vector<bool>(N));
void BFS() {
    queue<Node> q;
    ans[r1][c1] = 0;
    vis[r1][c1] = 1;
    q.push(node(r1, c1));
    while(!q.empty()) {
        ll r = q.front().r, c = q.front().c;
        q.pop();
        for (ll i = 0; i < 8; i++) {
            ll _r = r + dr[i];
            ll _c = c + dc[i];
            if(!(1 <= _r && _r <= R and 1 <= _c && _c <= C))
                continue;
            if (vis[_r][_c])
                continue;
            vis[_r][_c] = 1;
            ans[_r][_c] = ans[r][c] + 1;
            q.push(node(_r,_c));
        }
    }
    if (!vis[r2][c2])
        write(-1);
    else
        write(ans[r2][c2]);

}
void solve() {
    BFS();
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
