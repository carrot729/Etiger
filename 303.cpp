#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
typedef map<ll,ll>::iterator it;
ll L,M; 
ll ans=1; 
map<ll,ll> trees; 
int main(){
//  freopen("tree2.in","r",stdin);
//	freopen("tree2.out","w",stdout);
	cin>>L>>M;
	if(M==0){
		cout<<L+1<<endl;
		return 0; 
	}
	for(int i=0;i<M;i++){
		ll a,b;
		cin>>a>>b;
		if(a>b) swap(a,b);
		trees[a]++;      // ?????
		trees[b+1]--;    // ?????
	}
	ll s=0, tmp=0;
	for(it pnt=trees.begin();pnt!=trees.end();pnt++){
		ans += (pnt->first - tmp) * (!s);
		tmp = pnt->first;
		s += pnt->second;
	}
	it pnt=--trees.end();
	ans += (L - pnt->first) * (!s);
	cout<<ans<<endl;
	return 0;
}
