#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> xy;
const int N=19;
xy R,J;
const int INF=1e9+9;
int n,m;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
bool world[N][N];
bool vst[N][N];
int ans[N][N];
int main(){
//	freopen("romeo.in","r",stdin);
//	freopen("romeo.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char ch;
			cin>>ch;
			switch (ch){
				case 'R':
					R=make_pair(i,j);
					break;
				case 'J':
					J=make_pair(i,j);
					break;
				case '#':
					world[i][j]=1;
					break;
			}
			ans[i][j]=INF;
		}
	}
	queue<xy> que;
	que.push(R);
	ans[R.first][R.second]=0;
	vst[R.first][R.second]=1;
	while(!que.empty()){
		xy front=que.front();que.pop();
		if(front==J){
			cout<<fixed<<setprecision(1)<<ans[front.first][front.second]*1.0/2<<endl;
/*			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<ans[i][j]<<" \n"[j==m-1];
				}
			}*/
			return 0;
		}
		for(int i=0;i<4;i++){
			xy newXY=make_pair(front.first+dx[i],front.second+dy[i]);
			if(0>newXY.first||newXY.first>=n or 0>newXY.second||newXY.second>=m or world[newXY.first][newXY.second] or vst[newXY.first][newXY.second])
				continue;
			vst[newXY.first][newXY.second]=1;
			ans[newXY.first][newXY.second]=min(ans[newXY.first][newXY.second],ans[front.first][front.second]+1);
			que.push(newXY);
		}
	}
	cout<<"forever"<<endl;
	return 0;
}


