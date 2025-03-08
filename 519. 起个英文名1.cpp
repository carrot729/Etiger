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
string sL[N];
int n;
void input(){
	n=read();
	for(int i=0;i<n;i++) cin>>sL[i];
	sort(sL,sL+n);
}
int ans[N];bool vst[N];
void print(){
	for(int i=0;i<n;i++) cout<<sL[ans[i]];
	cout<<" wang\n";
}
void dfs(int h){
	if(h>=n){
		print();
		return;
	}
	for(int i=0;i<n;i++){
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
//	freopen("name1.in","r",stdin);
//	freopen("name1.out","w",stdout);
	input();
	if(match1()) solve1();
	else if(match2()) solve2();
	else if(match3()) solve3();
	else solve();
	return 0;
}


