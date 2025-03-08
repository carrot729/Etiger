#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e1+9;
bool pic[N][N];
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
void dfs(int i,int j){
//	cout<<"DFS!\n";
	pic[i][j]=0;
	for(int x=0;x<4;x++){
		int _i=i+dx[x],_j=j+dy[x];
		if (!(1<=_i&&_i<=10)){continue;}
		if (!(1<=_j&&_j<=10)) {continue;}
		if(!pic[_i][_j]) {continue;}
		dfs(_i,_j);
	}
}
int main(){
//	freopen("dice.in","r",stdin);
//	freopen("dice.out","w",stdout);
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			char ch;
			cin>>ch;
			pic[i][j]=(ch=='#');
		}
	}
	int ans=0;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			if(pic[i][j]){
				bool flag=0;
				for(int x=0;x<4;x++){
					int _i=i+dx[x],_j=j+dy[x];
					if (!(1<=_i&&_i<=10)) continue;
					if (!(1<=_j&&_j<=10)) continue;
					flag=pic[_i][_j];
					if(flag) break;
				}
				if(flag){
					ans++;dfs(i,j);
					/*for(int n=1;n<=10;n++){
						for(int m=1;m<=10;m++){
							cout<<(pic[n][m]?'#':'.');
						}
						cout<<endl;
					} cout<<endl;*/
				}
//				else pic[i][j]=0;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}


