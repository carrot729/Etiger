#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define INF 1e9+9
#define ERR 1e-8
typedef long long ll;
typedef string str;

const ll N=1e5+9;
void input();void solve();
bool match1();void solve1();
bool match2();void solve2();
bool match3();void solve3();
ll n;
map<char, char> anc;
bool possible = 1;
vector<pair<char, char> > ISequal;
vector<pair<char, char> > Nequal;
void input() {
    scanf("%lld", &n);
    for (char i = 'a'; i <= 'z'; i++) {
        anc[i] = i;
    }
    for (ll i = 0; i < n; i++) {
        str tmp;
        cin >> tmp;
        pair<char, char> ab;
        ab.first = tmp[0]; ab.second = tmp[3];
        if (tmp[1] == '=') 
            ISequal.push_back(ab);
        else 
            Nequal.push_back(ab);
    }
}
char root(char node) {
    if (anc[node] == node) 
        return node;
    else 
        return anc[node]=root(anc[node]);
}
void inter(char nodeA, char nodeB) {
    anc[root(nodeA)] = root(nodeB);
}
void workIS() {
    for (ll i = 0; i < ISequal.size(); i++) {
        inter(ISequal[i].first, ISequal[i].second);
    }
}
void workN() {
    for (ll i = 0; i <Nequal.size(); i++) {
        if (root(Nequal[i].first) == root(Nequal[i].second)){
            possible = 0;
            return;
        }
    }
}
void solve() {
    workIS();
    workN();
    cout << (possible ? "Possible" : "Impossible") << endl;
}
bool match1() {
    return 0;
}
void solve1() {
    solve();
}
bool match2() {
    return 0;
}
void solve2() {
    solve();
}
bool match3() {
    return 0;
}
void solve3() {
    solve();
}
int main(){
// freopen(".in","r",stdin);
// freopen(".out","w",stdout);
	input();
    if(match1()) solve1();
    elif(match2()) solve2();
    elif(match3()) solve3();
    else solve();
	return 0;
}
