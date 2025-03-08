#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
int c,n;
int f[N];
int main(){
#ifndef LOCAL
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
#endif
    cin>>c>>n;
    for(int i=1;i<=n;i++){
    	int w,v;
    	cin>>w>>v;
    	for(int j=c;j>=w;j--)
    		f[j]=max(f[j],f[j-w]+v);
	}
	cout<<f[c]<<endl;
	return 0;
}


