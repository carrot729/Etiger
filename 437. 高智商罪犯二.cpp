#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e2+9;
typedef int type;
inline type read(){
    bool f=1;type x=0;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-') f=!f;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}
    return (f?x:-x);
}
inline void write(type x){
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');return;
}
int n,k;
int x[N];
void input(){
	n=read();k=read();
	for(int i=0;i<n;i++) x[i]=read(); 
}
bool OK(int o){
	int cnt=1,sum=0;
	for(int i=0;i<n;i++){
		sum+=x[i];
		if(sum>o){
			cnt++;
			sum=x[i];
		} 
	}
	return cnt<=k;
}
void solve(){
	int l=*max_element(x,x+n);
	int r=0;for(int i=0;i<n;i++) r+=x[i];
	int ans=(l+r)/2;
	while(l<=r){
		if(OK(ans)) r=ans-1;
		else l=ans+1;
		ans=(l+r)/2;
	}
	cout<<ans<<endl;
}
bool match1(){
	return false;
}
void solve1(){
	solve();
}
bool match2(){
	return false;
}
void solve2(){
	solve();
}
bool match3(){
	return false;
}
void solve3(){
	solve();
}
int main(){
//	freopen("criminal2.in","r",stdin);
//	freopen("criminal2.out","w",stdout);
	input();
	if(match1()) solve1();
	else if(match2()) solve2();
	else if(match3()) solve3();
	else solve();
	return 0;
}


