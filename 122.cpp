#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const ll N=1e5+9;
ll n,a[N],b[N];
ll solve(ll l,ll r){
	if(l==r) return 0;
	ll mid=(r+l)>>1;
	ll res=0;
	res+=solve(l,mid);
	res+=solve(mid+1,r);
	int i=l,j=mid+1;
	for(int k=l;k<=r;k++){
		if(i>mid) b[k]=a[j++];
		elif(j>r) b[k]=a[i++];
		elif(a[i]<=a[j]) b[k]=a[i++];
		else {res+=mid-i+1;b[k]=a[j++];}
	}
	for(int k=l;k<=r;k++)a[k]=b[k];
	return res;
}
int main(){
#ifndef LOCAL
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
#endif
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<solve(0,n-1)<<endl;
	return 0;
}


