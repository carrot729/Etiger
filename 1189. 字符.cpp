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
int cnt[300];
int main(){
	freopen("letter.in","r",stdin);
	freopen("letter.out","w",stdout);
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++) cnt[s[i]]++;
	for(int i=0;i<s.size();i++){
		if(cnt[s[i]]==1){
			cout<<s[i]<<endl;
          	return 0;
		}
	} 
	cout<<"no"<<endl;
	return 0;
}

