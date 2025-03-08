#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10009;
double height[N];
int n;
double a,b;
int main(){
	//freopen("height.in","r",stdin);
	//freopen("height.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++) cin>>height[i];
	cin>>a>>b;
	sort(height,height+n);
	cout<<upper_bound(height,height+n,b)-lower_bound(height,height+n,a)<<" ";
	cout<<lower_bound(height,height+n,b)-upper_bound(height,height+n,a)<<" ";
	cout<<lower_bound(height,height+n,b)-lower_bound(height,height+n,a)<<" ";
	cout<<upper_bound(height,height+n,b)-upper_bound(height,height+n,a)<<endl;
	return 0;
}

