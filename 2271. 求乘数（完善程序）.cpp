//2271. ����������Ƴ���
#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
    long p,a,b,c,t,n;
    while (1)
    {
       //cout <<"���� p, ���һλΪ 1 �� 3 �� 7 �� 9:"<<endl;
       cin >>p;
       if ((p%2!=0)&&(p%5!=0))  // ��������������Ҫ�󣬽���ѭ��
           break;
    }
    a=0; n=0;
    while (a<p)
    {
       a=a*10+1; n++; // ���� a ��Ų����Ҷ��n Ϊ�Ҷ����λ��
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
