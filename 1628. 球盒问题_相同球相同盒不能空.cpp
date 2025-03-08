#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e1+9;
int n,m; 
int f[N][N];
int main(){
#ifndef LOCAL
	freopen("qiuhe1.in","r",stdin);
	freopen("qiuhe1.out","w",stdout);
#endif
	cin>>n>>m;
	if(n<m){
		cout<<0<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++) f[i][1]=1;
	for(int j=2;j<=m;j++)
		for(int i=j;i<=n;i++)
			f[i][j]=f[i-1][j-1]+f[i-j][j];
	cout<<f[n][m]<<endl;
	return 0;
}


