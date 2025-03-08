#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e1+9,K=9;
int f[N][K];
int n,k;
int main(){
#ifndef LOCAL
	freopen("partition.in","r",stdin);
	freopen("partition.out","w",stdout);
#endif
    cin>>n>>k;
    f[1][1]=1;
    for(int i=1;i<=n;i++) f[i][1]=1;
    for(int i=0;i<=k;i++){
    	for(int j=0;j<=n;j++){
    		f[i][j]=f[i-1][j-1]+f[i-j][j];
		}
	}
	//cout<<f[n][k]<<endl;
	for(int i=0;i<=n;i++) for(int j=0;j<=k;j++) cout<<f[i][j]<<" \n"[j==k];
	return 0;
}


