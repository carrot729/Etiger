//1995. 过河问题(完善程序)
#include<iostream>
#include<cstring>
using namespace std;
const int SIZE=100;
const int INFINITY = 10000;
const bool LEFT=true;
const bool RIGHT =false;
const bool LEFT_TO_RIGHT=true;
const bool RIGHT_TO_LEFT=false;
int n,hour[SIZE];
bool pos[SIZE];
int max(int a,int b){
    if(a>b)
       return a;
    else
       return b;
}
int go(bool stage){ 
    int i,j,num,tmp,ans;
     
    if(stage==RIGHT_TO_LEFT){
        num=0;                                                    
        ans=0;                                                    
        for(i=1;i<=n;i++)                                         
           if(pos[i]==RIGHT){                                      
                 num++;                                            
                 if(hour[i]>ans)                                   
                    ans=hour[i];
             }
        if(num<=2)                                           
            return ans;                                         
        ans=INFINITY;
        for(i=1;i<=n-1;i++)
             if(pos[i]==RIGHT)                                   
                 for(j=i+1;j<=n;j++)                           
                      if(pos[j]==RIGHT){
                          pos[i]=LEFT;
                          pos[j]=LEFT;                             
                          tmp=max(hour[i],hour[j])+go(LEFT_TO_RIGHT);    
                          if(tmp<ans)
                           ans=tmp;
                          pos[i]=RIGHT;             
                          pos[j]=RIGHT;     
                      }
        return ans;
    }
    if(stage==LEFT_TO_RIGHT){
        ans=INFINITY;
        for(i=1;i<=n;i++)
            if(pos[i]==LEFT){                             
                pos[i]=RIGHT;                      
                tmp=hour[i]+go(RIGHT_TO_LEFT);                 
                if(tmp<ans)
                    ans=tmp;
                pos[i]=LEFT;  
            }
        return ans;
    }
    return 0;
}
int main(){
    int i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>hour[i];
        pos[i]=RIGHT;
    }
    cout<<go(RIGHT_TO_LEFT)<<endl;
    return 0;
}


