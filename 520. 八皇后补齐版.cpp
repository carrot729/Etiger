#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=19,Q=8;
bool l[N][N];
ll ans=0;
bool isOK(ll x,ll y){
	for(int i=1;i<=Q;i++) if(l[i][y]) return 0;
	for(int i=1;i<=Q;i++) if(l[x][i]) return 0;
	for(int i=1;i<=min(x-1,y-1);i++) if(l[x-i][y-i])return 0;
	for(int i=1;i<=min(x-1,Q-y);i++) if(l[x-i][y+i])return 0;
	for(int i=1;i<=min(Q-x,y-1);i++) if(l[x+i][y-i])return 0;
	for(int i=1;i<=min(Q-x,Q-y);i++) if(l[x+i][y+i])return 0;
	return 1;
}
void DFS(ll n){
	if(n>Q){
		ans++;
//		cout<<endl;
//		for(int i=1;i<=Q;i++){
//			for(int j=1;j<=Q;j++){
//				cout<<l[i][j]; 
//			}
//			cout<<endl;
//		}
		return;
		
	} 
	for(ll i=1;i<=Q;i++){
		if(l[n][i]){
			DFS(n+1);
			return;	
		}
	}
	for(ll i=1;i<=Q;i++){
		if(isOK(n,i)){
			l[n][i]=1;
			DFS(n+1);
			//printf("x==%lld,y==%lld\n",n,i);
			l[n][i]=0;
		}
	}
} 
int main(){
//  freopen(".in","r",stdin);
//	freopen("1.out","w",stdout);
	for(int i=1;i<=Q;i++){
		for(int j=1;j<=Q;j++){
			char ch;
			cin>>ch;
			l[i][j]=ch=='Q';
		}
	}
//	cout<<endl;
//		for(int i=1;i<=Q;i++){
//			for(int j=1;j<=Q;j++){
//				cout<<l[i][j]; 
//			}
//			cout<<endl;
//		}
	DFS(1);
	cout<<ans<<endl;
	return 0;
}


