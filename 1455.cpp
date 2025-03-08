#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=5e6+9;
ll c,a,b;
bool f[N];

int main(){
//  freopen("big.in","r",stdin);
//	freopen("big.out","w",stdout);
	cin>>c>>a>>b;
	f[0]=1;
	for(ll i=1;i<=c;i++){
		if(i>=a) f[i] = f[i] || f[i-a];
		if(i>=b) f[i] = f[i] || f[i-b];
	}
	for(ll i=1;i*2<=c;i++){
		f[i] = f[i] || f[i*2] || f[i*2+1];
	}
	for(ll i=1;i<=c;i++){
		if(i>=a) f[i] = f[i] || f[i-a];
		if(i>=b) f[i] = f[i] || f[i-b];
	}
	for(ll i=c;i>=0;i--){
		if(f[i]){
			cout << i <<endl;
			return 0;
		}
	}
	return 0;
}
