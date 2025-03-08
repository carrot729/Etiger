#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e3+9;
const int INF=1e9+9;
int n,a,b;
int dp[N];
int main(){
//	freopen("steps.in","r",stdin);
//	freopen("steps.out","w",stdout);
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++) dp[i]=INF;
	dp[0]=0;
	for(int i=1;i<=n;i++){
		if(i<a and i<b) continue;
		dp[i]=min((i>=a?dp[i-a]:INF),(i>=b?dp[i-b]:INF))+1;
	}
	cout<<(dp[n]>=INF?-1:dp[n])<<endl;
/*	for(int i=0;i<=n;i++) {
		cout<<dp[i]<<" \n"[i==n]; 
	}*/

	return 0;
}


