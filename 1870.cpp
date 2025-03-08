#include<bits/stdc++.h>
#define elif else if
#define INF 1e16+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e2+9;
const ll V=1e5+9;
ll n,W;
ll w[N],v[N];
ll g[N][V];
int main(){
//  freopen("investment.in","r",stdin);
//	freopen("investment.out","w",stdout);
	cin>>n>>W;
	for(ll i=1;i<=n;i++) cin>>w[i]>>v[i];
	ll V=n*1000;
	for(ll p=1;p<=V;p++)g[0][p]=INF;
	g[0][0]=0;
	for(ll i=1;i<=n;i++){
		for(ll p=0;p<=V;p++){
			if(v[i]>p){
				g[i][p]=min(g[i-1][p],w[i]);
			}
			else{
				g[i][p]=min(g[i-1][p],g[i-1][p-v[i]]+w[i]);
			}
		}
	}
	for(ll p=V;p>=0;p--){
		if(g[n][p]<=W){
			cout<<p<<endl;
			break;
		}
	}
	return 0;
}
