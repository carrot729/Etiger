#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
string s; ll n;
ll f[N][N];
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
    char ch;
	while (cin >> ch) {
        if (ch == '(' or\
            ch == ')' or\
            ch == '[' or\
            ch == ']' or\
            ch == '{' or\
            ch == '}'
        ) s += ch;
    }
    n = s.size();
    fill(f[0], f[0] + N * N, INF);
    for (ll i = 1; i <= n; i++)
        f[i][i] = 0;
    for (ll i = n - 1; i >= 1; i--) {
        for (ll j = i + 1; j <= n; j++) {
            for (ll k = i; k <= j - 1; k++) {
                
            }
        }
    }
    cout << f[1][n] <<endl;
	return 0;
}
