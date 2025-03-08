//311. 捡金币和收费站
#include <bits/stdc++.h>
using namespace std;
const int N=9;
int world[N][N];
int f[N][N];
int main(){
//  freopen("fee.in","r",stdin);
//  freopen("fee.out","w",stdout);
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			char tmp;
			cin>>tmp;
			if(tmp=='*') world[i][j]=-1;
			else world[i][j]=tmp-'0';
		}		
	}
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			int f1,f2;
			if(i==1&&j==1) f[i][j]=world[i][j];
			else{
				f1=f[i-1][j]+world[i][j];
				f2=f[i][j-1]+world[i][j];
				if(i<=1) f[i][j]=f2;
				else if(j<=1) f[i][j]=f1;
				else f[i][j]=max(f1,f2);
			}
		}		
	}
	cout<<f[5][5]<<endl;
	return 0;
}

