#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=100000+9;
ll n,h[N];
ll solve(ll i,ll j){
	return abs(j-i+1)*min(h[i],h[j]);
}
int main(){
//  freopen("banner.in","r",stdin);
//	freopen("banner.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++) cin>>h[i];
	ll i=0,j=n-1;
	ll ans=0;
	while(i<j){
		ans=max(solve(i,j),ans);
		if(h[i]<h[j]) i++;
		else j--;
	}
	cout<<ans<<endl;
	return 0;
}


