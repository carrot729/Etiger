//2515. 九宫幻方
#include<bits/stdc++.h>
using namespace std;
int square[3][3];
bool check(){
	if(square[1][1]!=5) return 0;//五居其中
	if(square[0][0]!=2 and square[0][2]!=2 and square[2][0]!=2 and square[2][2]!=2) return 0;
	else int 
	
}
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	for(int i=0;i<3;i++)
	    for(int j=0;j<3;j++)
	        cin>>square[i][j];
	return 0;
}

