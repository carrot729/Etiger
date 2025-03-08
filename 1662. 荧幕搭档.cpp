#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
ll n,d,y[N];
int main(){
//  freopen("difference.in","r",stdin);
//	freopen("difference.out","w",stdout);
	cin>>n>>d;
	for(ll i=0;i<n;i++)
		cin>>y[i];
	sort(y,y+n);
	ll ans=0;
	for(ll i=n-1;i>0;i--){
		for(ll j=i-1;j>=0&&abs(y[i]-y[j])<d;j--){
			ans++;
			//printf("%lld %lld\n",y[i],y[j]);
		}
	}
	cout<<ans<<endl;
	return 0;
}


