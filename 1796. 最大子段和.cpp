#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
ll n,x[N];
ll dp[N];
int main(){
//	freopen("subsequence.in","r",stdin);
//	freopen("subsequence.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++) cin>>x[i];
	dp[0]=x[0];
	for(int i=1;i<n;i++){
		dp[i]=max(x[i],dp[i-1]+x[i]);
	}
	printf("%lld %lld\n",*max_element(dp,dp+n),max_element(dp,dp+n)-dp+1);
	/*for(int i=0;i<=n;i++) {
		cout<<dp[i]<<" \n"[i==n]; 
	}*/
	return 0;
}


