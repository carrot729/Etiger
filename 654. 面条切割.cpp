#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
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
int n,m;
int noodle[N]; 
void input(){
	n=read(); m=read();
	for(int i=0;i<n;i++) noodle[i]=read(); 
}
bool OK(int x){
	ll cnt=0;
	for(int i=0;i<n;i++){
		cnt+=noodle[i]/x;
	}
	return cnt>=m;
}
void solve(){
	int r=*max_element(noodle,noodle+n);
	int l=1;
	int ans=(r+l)/2;
	while(l<=r){
		if(OK(ans))
			l=ans+1;
		else
			r=ans-1;
		ans=(r+l)/2;
	}
	write(ans);
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
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	input();
	if(match1()) solve1();
	else if(match2()) solve2();
	else if(match3()) solve3();
	else solve();
	return 0;
}


