#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e3+9;
int n,k;
int x[N];
int cnt[209];
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>x[i];
	int l=0,r=0,ans=n+1,sum=0;
	while(1){
		while(r<n&&sum<k){
			if(++cnt[x[r++]]==1) sum++;
		}
		if(sum<k) break;
		ans=min(ans,r-l);
		if(--cnt[x[l++]]==0) sum--;
	}
//    printf("%d %d\n",l,r);
	if(ans>n){
		cout<<"impossible"<<endl;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}
