#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
ll n,a[N],m;
ll part(ll l,ll r){
	ll pvt=a[((r-l)/2)];
	ll i=l-1,j=r+1;
	while(1){
		while(a[++i]<pvt);
		while(a[--j]>pvt);
		if(i<=j) return j;
		swap(a[i],a[j]);
	}
}
ll qsort(ll l,ll r){
	if(l>=r) return a[r];
	int p=part(l,r);
	if(m<=p) return qsort(l,p);
	else return qsort(p+1,r);
}
int main(){
//  freopen("median.in","r",stdin);
//	freopen("median.out","w",stdout);
	cin>>n;
	m=(n/2);
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<qsort(0,n-1)<<endl;
	return 0;
}


