#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e2+9;
typedef pair<int,int> xy;
int n,a,b;
int h[N][N];
bool vst[N][N];
int ans;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int main(){
//	freopen("volcano.in","r",stdin);
//	freopen("volcano.out","w",stdout);
	cin>>n>>a>>b;
	ans=n*n-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>h[i][j];
		}
	} 
	queue<xy> que;
	que.push({a,b});
	vst[a][b]=1;
	while(!que.empty()){
		xy front=que.front();que.pop();
		for(int i=0;i<4;i++){
			int nx=front.first+dx[i],ny=front.second+dy[i];
			if(1>nx||nx>n or 1>ny||ny>n or vst[nx][ny] or h[nx][ny]>=h[front.first][front.second])
				continue;
			vst[nx][ny]=1;
			ans--;
			que.push({nx,ny});
		}
	}
	cout<<ans<<endl;
/*	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<(vst[i][j]?'*':'.')<<"\0\n"[j>n-1];
		}
	} */
	return 0;
}


