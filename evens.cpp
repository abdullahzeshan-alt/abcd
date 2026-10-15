#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void even(int n)
{
    int i=1;
    int j=2;
    while(i<=n)
    {
        cout<<j<<endl;
        j=j+2;
        i++;
    }
    return;
}
int main()
{
    int n;
    cout<<"enter how many even numbers do u want:"<<endl;
    cin>>n;
    even(n);
return 0;
}