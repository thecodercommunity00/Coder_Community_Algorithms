#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    long a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;

    cout<<"________________________________________________________________________________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\tUSING ARRAY"<<endl;
    cout<<"________________________________________________________________________________________________________________________"<<endl;

    cout<<"Number Of Time You Want To Run : ";
    cin>>i;

    for(z=1;z<=i;z++)
    {
        cout<<"____________________________________________________________________________________________________________________"<<endl;
        cout<<"\n1.  Marks And Percentage Of Subject \n2.  Total Sale,Average Sale \n3.  Number Of Even And Odd No. \n4.  Sum Of Even Odd And Highest \n5.  Highest number \n6.  Sum Of Element Divisible By 5 \n"<<endl;
        cout<<"____________________________________________________________________________________________________________________"<<endl;
        cout<<"Choice : ";
        cin>>x;
        cout<<"\n";

        switch(x)
        {
            case 1:  {
                     cout<<"____________________________________________________________________________________________________________________"<<endl;
                     cout<<"\t\t\t\t\t Marks And Percentage Of Subject "<<endl;
                     cout<<"____________________________________________________________________________________________________________________"<<endl;
                     cout<<"Enter Number Of Subject : "<<endl;
                     cin>>n;
                     cout<<"Enter marks limit : "<<endl;
                     cin>>l;
                     cout<<"\n";
                     int *a=new int[n];
                     t=0;
                     for(i=0;i<n;i++)
                     {
                         cout<<"Enter Marks Of Subject "<<i+1<<" : ";
                         cin>>a[i];
                         t=t+a[i];
                     }
                     p=(t/l)*100;
                     cout<<"\n"<<"Total Marks : "<<t<<"\n Percentage : "<<p<<endl;
                     break;
                     }



           case 2:   {
                     cout<<"____________________________________________________________________________________________________________________"<<endl;
                     cout<<"\t\t\t\t\t Total Sale And Average sale"<<endl;
                     cout<<"____________________________________________________________________________________________________________________"<<endl;
                     cout<<"Enter Number Of days : "<<endl;
                     cin>>n;
                     int *a=new int[n];
                     t=0;
                     for(i=0;i<n;i++)
                     {
                         cout<<"Enter Sale Of Day "<<i+1<<" : ";
                         cin>>a[i];
                         t=t+a[i];
                     }
                     c=t/n;
                     cout<<"Total sale   : "<<t<<endl;
                     cout<<"Average Sale : "<<c<<endl;
                     break;
                     }


            case 3:  {
                     cout<<"_____________________________________________________________________________________________________________________"<<endl;
                     cout<<"\t\t\t\t\tNumber Of Even And Odd No."<<endl;
                     cout<<"_____________________________________________________________________________________________________________________"<<endl;
                     cout<<"Enter Limit Of Numbers : ";
                     cin>>n;
                     int *a=new int[n];
                     e=o=0;
                     for(i=0;i<n;i++)
                     {
                         cout<<"Enter Numbers "<<i+1<<" : ";
                         cin>>a[i];
                         if(a[i]%2==0)
                            e++;
                         else
                            o++;
                     }
                     cout<<"Total Even Numbers Are : "<<e<<endl;
                     cout<<"Total Odd Numbers Are  : "<<o<<endl;
                     }
                     break;


            case 4: {
                    cout<<"______________________________________________________________________________________________________________________"<<endl;
                    cout<<"\t\t\t\t\tSum Of Even Odd And Highest"<<endl;
                    cout<<"______________________________________________________________________________________________________________________"<<endl;
                    cout<<"Enter Limit Of Number : ";
                    cin>>n;
                    int *a=new int[n];
                    e=o=0;
                    for(i=0;i<n;i++)
                    {
                        cout<<"Enter Numbers "<<i+1<<" : ";
                        cin>>a[i];
                        if(a[i]%2==0)
                            e=e+a[i];
                        else
                            o=o+a[i];
                    }
                    cout<<"Sum Even Numbers Are : "<<e<<endl;
                    cout<<"Sum Odd Numbers Are  : "<<o<<endl;
                    if(e>o)
                        cout<<"Highest Is Even  "<<e<<endl;
                    else
                        cout<<"Highest Is Odd  "<<o<<endl;
                    }
                    break;


            case 5: {
                    cout<<"______________________________________________________________________________________________________________________"<<endl;
                    cout<<"\t\t\t\t\tHighest Number"<<endl;
                    cout<<"______________________________________________________________________________________________________________________"<<endl;
                    int highest(int[],int);
                    cout<<"Enter Size Limit Of Data : ";
                    cin>>n;
                    int *a=new int[n];
                    for(i=0;i<n;i++)
                    {
                        cout<<"Enter element "<<i+1<<" : ";
                        cin>>a[i];
                    }
                    h=highest(a,n);
                    cout<<"Highest Number Is : "<<h<<endl;
                    getch();
                    break;
                    }


            case 6: {
                    cout<<"______________________________________________________________________________________________________________________"<<endl;
                    cout<<"\t\t\t\t\tSum OF Element Divisible By 5"<<endl;
                    cout<<"______________________________________________________________________________________________________________________"<<endl;
                    int sum(int[],int);
                    cout<<"Enter Size Limit Of Data : ";
                    cin>>n;
                    int *a=new int[n];
                    for(i=0;i<n;i++)
                    {
                        cout<<"Enter Element "<<i+1<<" : ";
                        cin>>a[i];
                    }
                    s=sum(a,n);
                    cout<<"Sum Of Element Divisible By 5 Are : "<<s<<endl;
                    break;
                    }

           case 7:
               {

                   cout<<"______________________________________________________________________________________________________________________"<<endl;
                   cout<<"\t\t\t\t\t\tElement whose last digit is 3"<<endl;
                   cout<<"______________________________________________________________________________________________________________________"<<endl;
                   int cnt(int[],int);
                   cout<<"Enter size limit of data : ";
                   cin>>n;
                   int *a=new int[n];
                   for(i=0;i<n;i++)
                   {
                       cout<<"Enter the elements: ";
                       cin>>a[i];
                   }

               }

           default :   cout<<"____________________________________________________________________________________________________________________"<<endl;
                      cout<<"!!!!!!Coming Soon!!!!!!"<<endl;
                      cout<<"____________________________________________________________________________________________________________________"<<endl;

        }

    }
}




//Case 5:
int highest(int x[],int n)
{
    int big,i;
    big=x[0];
    for(i=1;i<n;i++)
    {
        if(x[i]>big)
            big=x[i];
    }
    return(big);
}


//Case 6:
int sum(int x[], int n)
{
    int s,i;
    s=0;
    for(i=0;i<n;i++)
    {
        if(x[i]%5==0)
            s=s+x[i];
    }
    return(s);
}
