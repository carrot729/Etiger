#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m; 
int main(){
#ifndef LOCAL
	freopen("qiuhe2.in","r",stdin);
	freopen("qiuhe2.out","w",stdout);
#endif
    cin>>n>>m;
	if(m>n){
		cout<<0<<endl;
		return 0;
	} 
	ll ans=1;
	for(int i=1;i<=m-1;i++){
		ans*=n-i;
		ans/=i;
	}
	cout<<ans<<endl;
	return 0;
}


