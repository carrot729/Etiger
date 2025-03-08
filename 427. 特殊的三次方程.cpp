#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
const double ERR=1e-8;
double a; 
bool TooSmall(double x){
	return fabs(x*x*x+x*x+x)+ERR<a;
}
double BS(){
	double l=-1000.0,r=1000.0;
	double ans=l;
	while(fabs(r-l)>ERR){
		double mid=l+(r-l)/2.0;
		if(TooSmall(mid)) ans=l=mid;
		else r=mid; 
	}
	return ans;
}
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>a;
	cout<<fixed<<setprecision(3)<<BS()<<endl;
	return 0;
}


