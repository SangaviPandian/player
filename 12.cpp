#include<iostream>
using namespace std;
int main()
{
    int n,k,a[n],i,temp,j;
    cout<<"enter the number of element";
    cin>>n;
    cout<<"enter the number of shift";
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<=k;j++)
    {
        temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
