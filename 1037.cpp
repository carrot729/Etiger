#include<bits/stdc++.h>
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
using namespace std;
const ll N=1e5+9;
string a,b;
int main(){
//  freopen("typist1.in","r",stdin);
//	freopen("typist1.out","w",stdout);
	cin >> a >> b;
	ll j=0;
	for(ll i=0;i<a.size();i++){
		if(a[i] == b[j]){
			cout << i+1 << " ";
			j++;
		}
	}
	return 0;
}
