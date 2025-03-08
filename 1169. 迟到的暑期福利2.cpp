#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e3+9;
int n,V,W;
int f[N][N],b[N],v[N],w[N];
int main(){
	cin>>n>>V>>W;
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++) cin>>v[i];
	for(int i=0;i<n;i++) cin>>w[i];
    for(int i=0;i<n;i++){
    	for(int j=b[i];j<=V;j++){
    		for(int k=w[i];k<=W;k++){
    			f[j][k]=max(f[j][k],f[j-b[i]][k-w[i]]+v[i]);
			}
		}
	}
	cout<<f[V][W]<<endl;
	return 0;	
	return 0;
}


