#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string month(int m)
{
    string b;
    if(m==1)
    {
        b="january";
    }
    if(m==2)
    {
        b="feb";
    }
    if(m==3)
    {
        b="march";
    }
    if(m==4)
    {
        b="april";
    }
    if(m==5)
    {
        b="may";
    }
    if(m==6)
    {
        b="juner";
    }
    if(m==7)
    {
        b="july";
    }
    if(m==8)
    {
        b="august";
    }
    if(m==9)
    {
        b="september";
    }
    if(m==10)
    {
        b="october";
    }
    if(m==11)
    {
        b="november";
    }
    if(m==12)
    {
        b="december";
    }
    if(m==0 && m>12 && m<0)
    {
        cout<<"invalid input";
    }
      
    return b;
}
int  main()
{
    int m;
    cout<<"enter the number of month:";
    cin>>m;
    cout<<month(m);
    return 0;

}