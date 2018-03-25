#include<iostream>
using namespace std;
int main()
{
    int a,f=1,i;
    cout<<"enter values:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    cout<<f;
}

