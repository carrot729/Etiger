//296. PellЪ§Са
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[49];
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	int k;
	cin>>k;
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=k;i++) a[i]=(2*a[i-1]+a[i-2])%32767;
	cout<<a[k]; 
	return 0;
}

