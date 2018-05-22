#include<iostream>
using namespace std;
int main()
{
    int N,a[N],min,count,i;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
     for(int j=i+1;j<N;j++)
     {
         count=0;
         if(a[i]==a[j]&&i!=j)
         {
             count++;
         }
     }
     if(count==0)
    {
        cout<<a[i];
    }
    }
    
}
