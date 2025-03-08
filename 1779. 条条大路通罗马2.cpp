//1779. 条条大路通罗马2
#include <bits/stdc++.h>
using namespace std;
const int N=2009;
int s[N][N];
int main(){
//  freopen("rome.in","r",stdin);
//  freopen("rome.out","w",stdout);
	int n,m;
	cin>>n>>m;
	s[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if (!(i==1&&j==1)) s[i][j]=(s[i-1][j]+s[i][j-1])%10000007;
		}
	}
	cout<<s[n][m]<<endl;
	return 0;
}

