//1658. Ã¶¾Ù×éºÏ
#include<bits/stdc++.h>
using namespace std;
int n,m;
int l[19];
void print(){
	cout<<l[1];
	for(int i=2;i<=m;i++) cout<<" "<<l[i];
	cout<<endl;
}
void dfs(int x,int y){
	l[y]=x;
	if(x>=n-m+y+1) return; 
	if(y>=m){
		print();
		return;
	}

	for(int i=x+1;i<=n;i++){
		dfs(i,y+1);
	}
}
int main(){
	//freopen("combinations.in","r",stdin);
	//freopen("combinations.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n-m+1;i++){
		dfs(i,1);
	}
	return 0;
}

