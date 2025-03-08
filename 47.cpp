#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=3e2+9;
ll n,m,dp[N][N];
void next(ll x){
	for(ll i=1;i<=n;i++){
		dp[x][i]=dp[x-1][i>1?i-1:n]+dp[x-1][i<n?i+1:1];
	}
}
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>m;
	dp[0][1]=1;
	for(ll i=1;i<=m;i++){
		next(i);
	}
//	for(ll i=0;i<=m;i++){
//		for(ll j=1;j<=n;j++){
//			cout<<dp[i][j]<<" \n"[j==n];
//		}
//	}
	cout<<dp[m][1]<<endl;
	return 0;
}


