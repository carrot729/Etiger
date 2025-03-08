#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e1+9;
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
string s;int n;
void input(){
	cin>>s;
	n=s.size();
}
void dfs(int h){
	while(s[h]!='o'&&h<n) {		
		h++;
	}
	if(h==n){
		cout<<s<<endl;
		return;
	}
	if(h==0&&s[h+1]!='B'||h==n-1&&s[h-1]!='B'||s[h-1]!='B'&&s[h+1]!='B'){
		s[h]='B';
		dfs(h+1);
		s[h]='o';
	}
	if(h==0&&s[h+1]!='G'||h==n-1&&s[h-1]!='G'||s[h-1]!='G'&&s[h+1]!='G'){
		s[h]='G';
		dfs(h+1);
		s[h]='o';
	}
	if(h==0&&s[h+1]!='R'||h==n-1&&s[h-1]!='R'||s[h-1]!='R'&&s[h+1]!='R'){
		s[h]='R';
		dfs(h+1);
		s[h]='o';
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
//	freopen("color.in","r",stdin);
//	freopen("color.out","w",stdout);
	input();
	if(match1()) solve1();
	else if(match2()) solve2();
	else if(match3()) solve3();
	else solve();
	return 0;
}


