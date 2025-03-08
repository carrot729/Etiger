//1657. Ã¶¾Ù×Ó¼¯
#include<bits/stdc++.h>
using namespace std;
int n;
bool l[19];
void print(){
	int i;
	for(i=1;i<=n;i++){
		if(l[i]){
			cout<<i;
			break;
		}
	}
	i++;
	for(;i<=n;i++) {
		if(l[i]) cout<<" "<<i;	
	}
	cout<<endl;
}
void dfs(int m){
	if(m>=n+1) {
		print();
		return;
	}
	l[m]=1;
	dfs(m+1);
	l[m]=0;
	dfs(m+1);
}
int main(){
	//freopen("subsets.in","r",stdin);	
	//freopen("subsets.out","w",stdout);
	cin>>n;
	dfs(1);
	return 0;
} 
