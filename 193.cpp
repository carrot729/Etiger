#include<bits/stdc++.h>
#define elif else if
typedef long long ll;
const ll INF = 1e9+9;
using namespace std;
const ll N = 1e5+9;
ll n;
ll a[N], s[N];
ll f[N][N];
int main() {
//  freopen("merge.in","r",stdin);
//	freopen("merge.out","w",stdout);
	cin >> n;
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 1; i < n; i++) s[i] = s[i - 1] + a[i];
	fill(f, f + N * N, INF);
	for (ll len = 1; len <= n - 1; len++) {
		for (ll i = 1; i <= n - len; i++) {
			ll j = i + len;
			for (ll k = i; k <= j - 1; k++) {
				f[i][j] = min(f[i][j], f[i][k] + f[k+1][j] + s[j] + s[i-1]);
			}
		}
	}
	cout << f[1][n] << endl;
	return 0;
}
