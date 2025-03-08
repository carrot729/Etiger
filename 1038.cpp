#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e3+9;
ll n, L, lw;
string s, w[N];
ll f[N];

ll MySearch(ll i, ll j) {
	if (i < lw) return -1;
	if (s[i-1] != w[j][lw-1]) return -1;
	ll pa = i - 1;
	for (ll pb = lw-1; pb >= 0; pb--, pa--) {
		while (pa >= 0 && s[pa] != w[j][pb]) pa--;
		if (pa < 0) return -1;
	}
	return pa + 1;
}

int main() {
	// freopen("typist2.in","r",stdin);
	// freopen("typist2.out","w",stdout);
	cin >> n >> L;
	cin >> s;
	for (ll i = 0; i < n; i++) {
		cin >> w[i];
	}
	f[0] = 0;
	for (ll i = 1; i <= L; i++) {
		f[i] = f[i-1] + 1;
		for (ll j = 0; j < n; j++) {
			lw = w[j].size(); 
			ll p = MySearch(i, j);
			if (p < 0) continue;
			f[i] = min(f[i], f[p] + i - p - lw);
		}
	}
	cout << f[L] << endl;
	return 0;
}
