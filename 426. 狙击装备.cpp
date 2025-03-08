//426. ¾Ñ»÷×°±¸
#include<bits/stdc++.h>
using namespace std;
const int N=50009;
typedef long long ll;
ll x[N],y[N]; 
ll m,a,b;
int main(){
	//freopen("sniper.in","r",stdin);
	//freopen("sniper.out","w",stdout);
	cin>>m>>a>>b;
	for(int i=0;i<a;i++){
		cin>>x[i];
	}
	for(int i=0;i<b;i++){
		cin>>y[i];
	}
	sort(x,x+a);sort(y,y+b);
	int ans=0;
	for(int i=0;i<a&&x[i]<m;i++){
		ans+=upper_bound(y,y+b,m-x[i])-y;
	}
	cout<<ans<<endl;
	return 0;
}

