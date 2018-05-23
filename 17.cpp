#include<iostream>
using namespace std;
int main()
{
    int L,R,n,r,i;
    cin>>L>>R;
    n=(L>R)?L:R;
    for(i=2;i<n;i++)
    {
        if((i%L)==0 && (i%R)==0)
        {
          
          break;
        }
    }
    cout<<i;
}
