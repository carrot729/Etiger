//68. сОндЁи╪╗
#include<bits/stdc++.h>
using namespace std;
int score[500009];
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	int n,p;
	cin>>n>>p;
	for(int i=1;i<=n;i++)
        cin>>score[i];
    for(int i=0;i<p;i++){
    	int x,y,z;
    	cin>>x>>y>>z;
    	for(int j=x;j<=y;j++)
 			score[j]+=z;
	}
	cout<<*min_element(score,score+n);
	return 0;
}

