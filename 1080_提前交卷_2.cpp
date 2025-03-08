#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
ll n, x;
set<ll> s;
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin >> n;
    for (ll i = 1; i <= n; i++) {
        s.insert(i);
    }
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        set<ll>::iterator it = s.find(x);
        if (it == s.begin()) {
            cout << "0 ";
        }
        else {
            it--;
            cout << *it << " ";
            it++;
        }
        s.erase(it);
    }
    cout << endl;
	return 0;
}
