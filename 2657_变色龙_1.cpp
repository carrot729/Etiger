#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
ll n, m;
vector<ll> pos[N];
int main(){
//  freopen("chameleon.in","r",stdin);
//	freopen("chameleon.out","w",stdout);
	cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        ll clr;
        cin >> clr;
        pos[clr].push_back(i);
    }
    for (ll i = 0; i < m; i++) {
        ll x, y, z;
        cin >> x >> y >> z;
        ll l = lower_bound(pos[z].begin(), pos[z].end(), x) - pos[z].begin();
        ll r = upper_bound(pos[z].begin(), pos[z].end(), y) - pos[z].begin();
        cout << r - l <<" \n"[i == m - 1];
    }
	return 0;
}
