#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=9;
char image[N][N];
bool gold[N][N];
int x,y;
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
void dfs(int i,int j){
	gold[i][j]=1;
	for(int n=0;n<4;n++){
		int _i=i+dx[n],_j=j+dy[n];
		if (!(1<=_i&&_i<=5)) continue;
		if (!(1<=_j&&_j<=5)) continue;
		if(gold[_i][_j]||image[_i][_j]!=image[i][j]) continue;
		dfs(_i,_j);
	}
}
int main(){
//	freopen("gold.in","r",stdin);
//	freopen("gold.out","w",stdout);
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>image[i][j];
		}
	}
	cin>>x>>y;
	dfs(x,y);
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout<<(gold[i][j]?'G':image[i][j]);
		}
		cout<<endl;
	}
	return 0;
}


