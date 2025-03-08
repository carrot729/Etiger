#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=4e2+9;
ll m,n,f[N][N];
int main(){
#ifndef LOCAL
	freopen("trip.in","r",stdin);
	freopen("trip.out","w",stdout);
#endif
	cin>>m>>n;
	for(ll j=1;j<=m;j++) f[0][j]=1;
	for(ll i=1;i<=n;i++) f[i][1]=1;
	
	for(ll j=1;j<=m;j++){
		for(ll i=1;i<=n;i++){
			ll tmp=i;
			while(tmp>=0){
				f[i][j]+=f[tmp][j-1];
				tmp-=j;
			}
		}
	}
	cout<<f[n][m]<<endl;
/*	for(ll j=1;j<=m;j++)
		for(ll i=0;i<=n;i++)
			cout<<f[i][j]<<" \n"[i==n];*/
	return 0;
}


