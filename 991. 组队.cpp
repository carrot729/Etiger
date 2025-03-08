#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=200000+9;
ll n,m;
ll x[N];
ll tmp=0;
ll findPtnr(ll first){
	if(first<=tmp) return 0;
	ll req=m-x[first];
	tmp=lower_bound(x+tmp,x+first,req)-x;
	return first-tmp>0?first-tmp:-1; 
}
int main(){
//	freopen("team.in","r",stdin);
//	freopen("team.out","w",stdout);
	cin>>n>>m;
	/*if(n<2){
		cout<<0<<endl;
		return 0;
	} */
	for(ll i=0;i<n;i++) cin>>x[i];
	sort(x,x+n);
	ll ans=0;
	for(ll i=n-1;i>=0;i--){
		ll tmp1=findPtnr(i);
		if(tmp1<=0){
			//cout<<"BREAK\n";
			break;
		}
		else{
			ans+=tmp1;
			//printf("%lld %lld\n",ans,tmp1); 
		}
			
	}
	cout<<ans<<endl;
	return 0;
}


