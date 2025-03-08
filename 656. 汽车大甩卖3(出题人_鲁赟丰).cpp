#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=2e5+9;
ll n,m,f,a[N],b[N];
bool OK(ll x){
    ll tmp = 0;
    for(ll i = 0;i < x;i++){
        if(a[i] > b[m - x + i]){
            tmp += a[i] - b[m - x + i];
        }
        if(tmp > f) return 0;
    }
    return 1;
}
int main(){
//  freopen("car3.in","r",stdin);
//	freopen("car3.out","w",stdout);
	cin>>n>>m>>f;
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=0;i<m;i++) cin>>b[i];
	sort(a,a+n);sort(b,b+m);
	ll l=0,r=min(n,m);
	while(l <= r) {
   		int mid = (l + r) / 2;
  		if(OK(mid)) l = mid + 1;
  		else r = mid - 1;
	}
	cout<<m-r<<endl;
	return 0;
}


