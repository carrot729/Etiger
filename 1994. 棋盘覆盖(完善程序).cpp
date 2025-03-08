//1994. 棋盘覆盖(完善程序)
#include <iostream> 
#include <iomanip> 
using namespace std;
int board[65][65],tile; // tile 为纸片编号 
void chessboard(int tr,int tc,int dr,int dc,int size) // dr,dc 依次为特殊方格的行、列号  
{
    int t,s;  
    if (size==1) return;  
    t=tile++;  
    s=size/2;  
    if(dr<tr+s && dc<tc+s)   
        chessboard(tr,tc,dr,dc,s);  
    else
    {
        board[tr+s-1][tc+s-1]=t;
        chessboard(tr,tc,tr+s-1,tc+s-1,s);   
    }  
    if(dr<tr+s && dc>=tc+s)   
        chessboard(tr,tc+s,dr,dc,s);  
    else   
    {
        board[tr+s-1][tc+s]=t;
        chessboard(tr,tc+s,tr+s-1,tc+s,s);  
    }  
    if(dr>=tr+s && dc<tc+s)   
        chessboard(tr+s,tc,dr,dc,s);  
    else  
    {
        board[tr+s][tc+s-1]=t;
        chessboard(tr+s,tc,tr+s,tc+s-1,s);
    }  
    if(dr>=tr+s && dc>=tc+s)   
        chessboard(tr+s,tc+s,dr,dc,s);  
    else  
    {
        board[tr+s][tc+s]=t;
        chessboard(tr+s,tc+s,tr+s,tc+s,s);   
    } 
} 
  
void prt1(int b[][65],int n) 
{
    int i,j;  
    for(i=1;i<=n;i++)  
    {
        for(j=1;j<=n;j++)    
        cout<<setw(3)<<b[i][j];
        cout<<endl;
    } 
}  
int main(){
    int size,dr,dc;
//  cout<<"input size(4/8/16/64):"<<endl;
    cin>>size;   
//  cout<<"input the position of special block(x,y):"<<endl;   
    cin>>dr>>dc;   
    board[dr][dc]=-1;   
    tile++;  
    chessboard(1,1,dr,dc,size);   
    prt1(board,size); 
    return 0;
}

