#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
ll m, n;
vector<ll> add[N], rmv[N];
multiset<ll> tmp;
ll ans;

int main(){
//  freopen("ufo2.in","r",stdin);
//	freopen("ufo2.out","w",stdout);
	cin >> m >> n;
    ll id;
    for (ll i = 0; i < m; i++) {
        ll x, c, h;
        cin >> x >> c >> h;
        id = h - x;
        add[x].push_back(id);
        rmv[x+c-1].push_back(id);
    }
    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j < add[i].size(); j++) {
            tmp.insert(add[i][j]);
        }
        if (tmp.empty()) ans += -1;
        else ans += *(tmp.begin())+i;
        for (ll j = 0; j < rmv[i].size(); j++) {
            tmp.erase(tmp.find(rmv[i][j]));
        }
    }
    cout << ans <<endl;
	return 0;
}
