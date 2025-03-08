#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e2+9;
int n;
int x[N];
int cnt[19];
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++) cin>>x[i];
	int l=0,r=0,ans=n+1,sum=0;
	while(1){
		while(r<n&&sum<7){
			++r;
			if(0>=x[r]||x[r]>7)
				continue;
			if(++cnt[x[r]]==1) sum++;
		}
		if(sum<7) break;
		ans=min(ans,r-l);
		++l;
		if(0>=x[l]||x[l]>7)
			continue;
		if(--cnt[x[l]]==0) sum--;
	}
	if(ans>n){
		cout<<"bye dragon"<<endl;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}


