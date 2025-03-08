//293. Ò°ÊŞ³öÃ»
#include <bits/stdc++.h>
using namespace std;
const int N=2009;
long long s[N][N];
int main(){
//  freopen("beast.in","r",stdin);
//  freopen("beast.out","w",stdout);
	int n,m,x,y;
	cin>>n>>m>>x>>y; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			s[i][j]=s[i-1][j]+s[i][j-1];
			s[1][1]=1;
			s[x][y]=0;
		}
	} 
	cout<<s[n][m]<<endl;
	return 0;
}

