//28. Ã”¿Î√‘π¨
#include<bits/stdc++.h>
using namespace std;
const int N=19;
bool Map[N][N];
int f[N][N];
int n;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>Map[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			f[j][i]=f[i-1][j-1]+f[i-1][j]+f[i-1][j+1]+f[i][j-1]+f[i][j]+\
			f[i][j+1]+f[i+1][j-1]+f[i+1][j]+f[i+1][j+1];
			if(Map[j][i]) f[j][i]=0;
			f[1][1]=1;
		}
	}
//	cout<<f[1][n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

