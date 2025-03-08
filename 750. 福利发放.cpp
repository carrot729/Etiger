//750. ¸£Àû·¢·Å
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100009;
int n,m;
ll user[N];
int main(){
	//freopen("fuli.in","r",stdin);
	//freopen("fuli.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>user[i];
	sort(user,user+n);
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		cout<<upper_bound(user,user+n,x)-user<<endl;
	}
	return 0;
}

