#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e1+9;
char l[N][N];
ll n,k,ans=0;
bool isOK(ll i,ll j){
//	printf("%lld,%lld\n",i,j);
	if(l[i][j]=='@')
		return 0;
	for(ll x=1;x<=n;x++) 
		if(l[i][x]=='*' or l[x][j]=='*')
			return 0;
	return 1;
}
void DFS(ll i,ll num){
	if(num>=k){
		cout<<endl;
		for(int x=1;x<=n;x++){
			for(int y=1;y<=n;y++){
				cout<<l[x][y]; 
			}
			cout<<endl;
		}
		ans++;
		return;
	}
			
	if(i>n+1){
//		cout<<"BOOM!"<<i<<endl;
		return;
	}
	for(ll j=1;j<=n;j++){
		if(isOK(i,j)){
			l[i][j]='*';
			DFS(i+1,num+1);
			l[i][j]='o';
		}
		DFS(i+1,num);
	}
}
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			cin>>l[i][j];
		}
	}
	DFS(1,0);
	cout<<ans<<endl;
	return 0;
}


