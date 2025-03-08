#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=9;
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
int n; 
void input(){
	n=read();
}
bool vst[9];int ans[N];
void print(){
	for(int i=0;i<n;i++){
		write(ans[i]);
		putchar(i<n-1?' ':'\n');
	}
}
void dfs(int h){
	if(h>=n){print();return;}
	for(int i=1;i<=n;i++){
		if(vst[i]) continue;
		vst[i]=1;
		ans[h]=i;
		dfs(h+1);
		vst[i]=0;
	}
}
void solve(){
	dfs(0);
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


