#include<iostream>
using namespace std;
int main()
{
    int num,m,sum=0,s;
    cout<<"enter the number"<<endl;
    cin>>num;
    while(num!=0)
    {
        m=num%10;
        s=m*m;
        sum=sum+s;
        num=num/10;
    }
    cout<<sum;
}
