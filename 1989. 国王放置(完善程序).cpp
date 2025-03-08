//1989. 国王放置(完善程序)
#include <iostream>
#include <cstring>
using namespace std;
int n,m,k,ans;
int hash[5][5];
void work(int x,int y,int tot)
{
    int i,j;
    if (tot==k) {
        ans++;
        return;
    }
    do {
        while (hash[x][y]) {
            y++;
            if (y==m) {
                x++;
                y=0;
            }
            if (x==n)
                return;
        }
        for (i=x-1; i<=x+1; i++)
            if (i>=0&&i<n)
                for (j=y-1; j<=y+1; j++)
                    if (j>=0&&j<m)
                        hash[i][j]++;
        work(x,y,tot+1);
        for (i=x-1; i<=x+1; i++)
            if (i>=0&&i<n)
                for (j=y-1; j<=y+1; j++)
                    if (j>=0&&j<m)
                        hash[i][j]--;
        y++;
        if (y==m) {
            x++;
            y=0;
        }
        if (x==n)
            return;
    } while (1);
}
int main()
{
    cin >> n >> m >> k;
    ans=0;
    memset(hash,0,sizeof(hash));
    work(0,0,0);
    cout << ans << endl;
    return 0;
}

