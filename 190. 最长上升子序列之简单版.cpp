#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e2+9;
const int INF=0;
int x[N],n=0;
int dp[N];
int main(){
//	freopen("lis.in","r",stdin);
//	freopen("lis.out","w",stdout);
	int v;
	while(cin>>v)x[n++]=v;
	dp[0]=1;
	for(int i=1;i<n;i++){
		int tmp=-INF;
		for(int j=0;j<i;j++){
			if(x[j]>=x[i])
				continue;
			tmp=max(tmp,dp[j]);
		}
		dp[i]=tmp+1;
	}
	cout<<*max_element(dp,dp+n)<<endl;
/*	for(int i=0;i<n;i++) {
		cout<<dp[i]<<" \n"[i==n-1]; 
	}*/
	return 0;
}


