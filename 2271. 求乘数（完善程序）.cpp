//2271. 求乘数（完善程序）
#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
    long p,a,b,c,t,n;
    while (1)
    {
       //cout <<"输入 p, 最后一位为 1 或 3 或 7 或 9:"<<endl;
       cin >>p;
       if ((p%2!=0)&&(p%5!=0))  // 如果输入的数符合要求，结束循环
           break;
    }
    a=0; n=0;
    while (a<p)
    {
       a=a*10+1; n++; // 变量 a 存放部分右端项，n 为右端项的位数
    }
    t=0;
    do
    {
        b=a/p;
       cout <<setw(1)<<b;
       t++;
       if (t)
           cout <<endl;
       c= a-b*p;
       a= a*10+1;
       n++;
    }while (c>0);
    cout<<endl<<"n="<< n <<endl;
    return 0;
}
