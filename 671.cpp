#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e3+9;
int n,m,dp[N],f[N]; 
int main(){
//	freopen("reward1.in","r",stdin);
//	freopen("reward1.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ll tmp;
			cin>>tmp;
			f[j]+=tmp;
		}
	}
	dp[0]=f[0];
	for(ll i=1;i<n;i++){
		dp[i]=max(dp[i-1],0)+f[i];
	}
	cout<<max(0,*max_element(dp,dp+n+1));
	return 0;
}


