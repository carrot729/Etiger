#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e4+9;
int n,m;
bool v[N][N];
bool vst[N];
queue<int> que;
int main(){
//	freopen("relation.in","r",stdin);
//	freopen("relation.out","w",stdout);
	cin>>m>>n;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		v[a][b]=1;v[b][a]=1;
	}
/*	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<(v[i][j]?'*':'.');
		}cout<<endl;
	}*/
	que.push(0);vst[0]=1;
	while(!que.empty()){
		int front=que.front();que.pop();
		if(front==1){
			cout<<"Yes"<<endl;
			return 0;
		}
		for(int i=0;i<n;i++){
			if(v[front][i] and !vst[i]){
				que.push(i);
				vst[i]=1;
			}
		}
	}
	cout<<"No"<<endl;
	return 0;
}


