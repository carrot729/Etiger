#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=509;
ll x[N],s[N],t[N],f[N],g[N],n,k,ans;
int main(){
  	freopen("reward3.in","r",stdin);
	freopen("reward3.out","w",stdout);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){
		cin>>x[i];
	}
	s[0]=x[0]=0;
	for(ll i=1;i<=n;i++) s[i]=s[i-1]+x[i];
	f[0]=0;
	for(ll i=1;i<=n;i++){
		ll j=max(0ll,i-k);
		f[i]=max(f[i-1],s[i]-s[j]);
	}
	t[n+1]=x[n+1]=0;
	for(ll i=n;i>=1;i--) t[i]=t[i+1]+x[i];
	g[n+1]=0;
	for(ll i=n;i>=1;i--){
		ll j=min(n+1,i+k);
		g[i]=max(g[i+1],t[i]-t[j]);
	}
	for(ll i=1;i<=n-2;i++) ans=max(ans,f[i]+g[i+2]);
	cout<<ans<<endl;
	return 0;
}
