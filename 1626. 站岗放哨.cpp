#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
const long long INF=1e8+9;
const long long ERR=1e-8;
ll n,x[N],id[N],rk[N];
bool cmp(const ll& a,const ll& b){
	return x[a]<x[b];
}
int main(){
//  freopen("guard.in","r",stdin);
//	freopen("guard.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>x[i];
		id[i]=i;
		rk[i]=i;
	}
	sort(id+1,id+n+1,cmp);
	for(ll i=1;i<=n;i++){
		rk[id[i]]=i;
	}
	for(ll i=1;i<=n;i++){
		cout<<rk[i]<<" \n"[i==n];
	}
	return 0;
}



