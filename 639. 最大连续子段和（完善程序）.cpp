//639. 最大连续子段和（完善程序）
#include <iostream>
using namespace std;
int a[101],n,i,ans,len,tmp,beg;
int main() {
    cin >> n;
    for (i=1; i<=n; i++) cin >> a[i];
    beg=0 ;
    for (i=1; i<=n; i++) {
        if (tmp+a[i]>ans) {
            ans=tmp+a[i];
            len=i-beg;
        } else if (tmp+a[i]==ans &&i-beg>len)
            len=i-beg;
        if (tmp+a[i]<ans) {
            beg=i;
            tmp=0;
        } else
            tmp+=a[i] ;
    }
    cout << ans << " " << len << endl;
    return 0;
}

