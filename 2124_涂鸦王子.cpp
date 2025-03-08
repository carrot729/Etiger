#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
vector<ll> add[N], rmv[N];
set<ll> tmp;
ll n, m, p, q;

int main(){
//  freopen("graffiti.in","r",stdin);
//	freopen("graffiti.out","w",stdout);
	cin >> n >> m >> p >> q;
    for (ll i = 1; i <= m; i++) {
        // printf("[%lld]:",i);
        ll a = (i * p + q) % n + 1;
        ll b = (i * q + p) % n + 1;
        add[min(a, b)].push_back(i);
        // cout << (i * p + q) % n + 1 << " ";
        rmv[max(a, b)].push_back(i);
        // cout << (i * q + p) % n + 1 << endl;
    }
    // printf("_____START_____");
    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j < add[i].size(); j++) {
            tmp.insert(add[i][j]);
        }
        if (tmp.empty())
            cout << 0 << endl;
        else
            cout << *tmp.rbegin() << endl;
        for (ll j = 0; j < rmv[i].size(); j++) {
            tmp.erase(rmv[i][j]);
        }
    }
	return 0;
}
