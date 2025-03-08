#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=2e3+9;
ll n,m,a[N],b[N],f[N][N];
int main(){
//  freopen("haitao.in","r",stdin);
//	freopen("haitao.out","w",stdout);
	cin>>n>>m;
	f[1][1]=1;
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=0;i<n;i++) cin>>b[i];
	for(ll i=1;i<=n;i++){
		for(ll j=0;j<=m;j++){
			if(j<a[i])
				f[i][j]=f[i-1][j]+b[i];
			else
				f[i][j]=min(f[i-1][j]+b[i],f[i-1][j-a[i]]);
		}
	}
	// cout<<f[n][m]<<endl;
	for (ll i = 0; i <= n; i++)
	{
		for (ll j = 0; j <= m; j++)
		{
			cout<<f[i][j]<<" \n"[j==m];
		}
		
	}
	
	return 0;
}
