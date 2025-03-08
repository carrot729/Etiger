#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const int N=500000+9;
ll n;
ll x[N],y[N];
void mySort(ll l,ll r){
	if(l==r) return;
	ll mid=(r+l)>>1;
	mySort(l,mid);
	mySort(mid+1,r);
	int i=l,j=mid+1;
	for(int k=l;k<=r;k++){
		if(i>mid) y[k]=x[j++];
		elif(j>r) y[k]=x[i++];
		elif(x[i]<x[j]) y[k]=x[i++];
		else y[k]=x[j++];
	}
	for(int k=l;k<=r;k++)x[k]=y[k];
}
int main(){
#ifndef LOCAL
	freopen("sort.in","r",stdin);
	freopen("sort.out","w",stdout);
#endif
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	mySort(0,n-1);
	for(int i=0;i<n;i++){
		cout<<x[i]<<" \n"[i==n-1];
	}
	return 0;
}


