#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
const long long INF=1e8+9;
const long long ERR=1e-8;
ll n,x[N],y[N],idx[N],rkx[N],idy[N],rky[N]; 
bool cmpx(const ll&a,const ll&b){
	return x[a]<x[b];
}
bool cmpy(const ll&a,const ll&b){
	return y[a]<y[b];
}
int main(){
//  freopen("scarecrow.in","r",stdin);
//	freopen("scarecrow.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>x[i]>>y[i];
		idx[i]=i,idy[i]=i;
	}
	sort(idx,idx+n,cmpx);
	for(ll i=0;i<n;i++){
		rkx[idx[i]]=i+1;
	}
	sort(idy,idy+n,cmpy);
	for(ll i=0;i<n;i++){
		rky[idy[i]]=i+1;
	}
	for(ll i=0;i<n;i++){
		cout<<rkx[i]<<" "<<rky[i]<<endl;
	}
	return 0;
}



