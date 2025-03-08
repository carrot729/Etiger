//626. 坐标统计（完善程序）
#include<bits/stdc++.h>
 
using namespace std;
const int SIZE =100;
int x[SIZE],y[SIZE],f[SIZE];
int n,i,j,max_f,ans;
int main() {
    cin>>n;
    for(i=1;i<=n;i++) cin>>x[i]>>y[i];
    max_f=0;
    for(i=1;i<=n;i++) {
        f[i]=0;
        for(j=1;j<=n;j++) {
            if(x[j]<x[i] && y[j]<y[i])    f[i]++;
        }
         
        if(f[i]>=max_f) {
            max_f=f[i]; ans=i;
        }
    }
    for(i=1;i<=n;i++) cout<<f[i]<<endl;
    cout<<ans<<endl;
    return 0;
}
