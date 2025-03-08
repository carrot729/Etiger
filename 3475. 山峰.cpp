#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100009;
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
int a[N],l[N],r[N];
int main(){
	freopen("peak.in","r",stdin);
	freopen("peak.out","w",stdout);
	int n=read();
	for(int i=1;i<=n;i++) a[i]=read();
	l[1]=1; r[n]=1;
	for(int i=2;i<=n;i++) l[i]=a[i]>a[i-1]?l[i-1]+1:1;
	for(int i=n;i>=2;i--) r[i]=a[i]>a[i+1]?r[i+1]+1:1;
	int ans=0;
	for(int i=2;i<=n-1;i++) ans=max(ans,r[i]+l[i]-1);
	write(ans);
	return 0;
}

