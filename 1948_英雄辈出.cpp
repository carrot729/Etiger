#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=2e5+9;
ll n, x[N];
ll id[N], nxt[N], pre[N]; 
ll ans[N];
int main(){
//  freopen("heroes.in","r",stdin);
//	freopen("heroes.out","w",stdout);
	cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> x[i];
        id[x[i]] = i;
        nxt[i] = i + 1;
        pre[i] = i - 1;

    }
    for (ll i = 1; i <= n; i++) {
        ans[id[i]] = nxt[id[i]];
        nxt[pre[id[i]]] = nxt[id[i]];
        pre[nxt[id[i]]] = pre[id[i]];
    }
    for (ll i = 1; i <= n; i++)
        cout << ans[i] <<" \n"[i == n];
	return 0;
}
