#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
ll n, t[N];
ll id[N], rk[N];
set<ll> s;
set<ll>::iterator it;
ll ans;
int main(){
//  freopen("astronaut.in","r",stdin);
//	freopen("astronaut.out","w",stdout);
	cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> t[i];
    s.insert(t[1]);
    for (ll i = 2; i <= n; i++) {
        it = s.lower_bound(t[i]);
        if (it == s.begin())
            ans = *it;
        elif (it == s.end()) {
            it--;
            ans = *it;
        }
        else {
            ans = *it;
            ll d1 = *it - t[i];
            it--;
            ll d2 = t[i] - *it;
            if (d2 < d1)
                ans = *it;
        }
        printf("%lld ",ans);
        s.insert(t[i]);
    }
	return 0;
}
