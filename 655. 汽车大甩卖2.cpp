#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=2e5+9;
ll n,m,a[N],b[N],ans=0;
int main(){
//  freopen("car2.in","r",stdin);
//	freopen("car2.out","w",stdout);
	cin>>n>>m;
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=0;i<m;i++) cin>>b[i];
	sort(a,a+n);sort(b,b+m);
	ll j=0,i=0;
	while(i<n&&j<m){
		if(a[i]<=b[j]){
			i++; ans++;
		}
		j++;
	}
	cout<<ans<<endl;
	return 0;
}


