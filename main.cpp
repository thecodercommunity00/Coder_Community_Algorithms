#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
     double b,pf,t,ot,dd,whr,n;

     cout<<"NETT SALARY OF EMPLOYEE"<<endl;
     cout<<"Enter The Value Of Basic Salary  : ";
     cin>>b;
     cout<<"Enter The Value Of Working Hours : ";
     cin>>whr;

     pf=(b>=18000)?b*0.1:b*0.08;
     t=(b<=9999)?0:((b<17000)?1000:((b>22000)?b*0.1:b*0.14));
     dd=(whr>280)?0:((whr<280)?(280-whr)*30:0);
     ot=(whr>280)?(whr-280)*35:((whr<280)?0:0);

     cout<<"Provident Fund : "<<pf<<endl;
     cout<<"Tax            : "<<t<<endl;
     cout<<"Overtime       : "<<ot<<endl;
     cout<<"Deduction      : "<<dd<<endl;
     n=b-pf-t+ot-dd;
     cout<<"Nett Salary    : "<<n;
     getch();
}
