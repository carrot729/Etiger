#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e2+9;
int n,m;
bool ground[N][N];
int dx[]={0,1,1,1,0,-1,-1,-1};
int dy[]={1,1,0,-1,-1,-1,0,1};
void dfs(int i,int j){
	ground[i][j]=0;
	for(int x=0;x<8;x++){
		int _i=i+dx[x],_j=j+dy[x];
//		printf("dx:%d,_j:%d\n",dx[n],j+dy[n]);
		if (!(1<=_i&&_i<=n)){continue;}
		if (!(1<=_j&&_j<=m)) {continue;}
		if(!ground[_i][_j]) {continue;}
//		printf("%d:%d\n",_i,_j);
		dfs(_i,_j);
	}
}
int main(){
//	freopen("puddle.in","r",stdin);
//	freopen("puddle.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char ch;
			cin>>ch;
			ground[i][j]=(ch=='@');
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			if(ground[i][j]){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}


