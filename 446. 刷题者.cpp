#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
const double ERR=1e-8;
ll n,k,s[N],t[N];

double z[N];
bool OK(double x){
	for(ll i=0;i<n;i++)
		z[i]=0;
	for(ll i=0;i<n;i++)
		z[i]=s[i]*1.0-(x*t[i]);
	sort(z,z+n);
	double sum=0;
	for(ll i=n-k;i<n;i++)
		sum+=z[i];
//	cout<<(sum>=0?"YES":"NO")<<endl;
	return sum>=0;
	
}
double BS(){
	double maxs=*max_element(s,s+n),mint=*min_element(t,t+n);
	double l=0,r=maxs/mint;
//	cout<<fixed<<setprecision(4)<<l<<" "<<r<<endl;
	double ans=0;
	while(r-l>ERR){
//		cout<<"1"<<endl;
		double mid=l+(r-l)/2;
		if(OK(mid)) ans=l=mid;
		else r=mid; 
//		cout<<fixed<<setprecision(4)<<l<<" "<<r<<" "<<mid<<endl;
	}
	return ans;
}
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	cout<<fixed<<setprecision(2)<<(BS()-1)*100.0<<"%"<<endl;
	return 0;
}


