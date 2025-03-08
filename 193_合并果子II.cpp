#include<bits/stdc++.h>
#define elif else if
typedef long long ll;
const ll INF = 1e9+9;
using namespace std;
const ll N = 1e2+9;
ll n;
ll a[N], s[N];
ll f[N][N];
int main() {
//  freopen("merge.in","r",stdin);
//	freopen("merge.out","w",stdout);
	cin >> n;
    for (ll i = 1; i <= n; i++) cin >> a[i];
	for (ll i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];
	fill(f[0], f[0] + N * N, INF);
    for (ll i = 1; i <= n; i++) f[i][i] = 0;
	for (ll i = n - 1; i >= 1; i--) {
        for (ll j = i + 1; j <= n; j++) {
            for (ll k = i; k <= j - 1; k++) {
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + s[j] - s[i - 1]);
            }
        }
    }
	cout << f[1][n] << endl;
	return 0;
}
