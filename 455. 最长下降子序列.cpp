#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
ll b[N],dp[N]; 
ll i=1;
ll LDS(){
	dp[1]=1;
	
}
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	while(cin>>b[i++]);
	cout<<LDS()<<endl;
	return 0;
}


