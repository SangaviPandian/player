#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1,s2;
    int a,b,i,count=0;
    cout<<"enter two string"<<endl;
    cin>>s1>>s2;
    a=s1.length();
    b=s2.length();
    if(a==b)
    {
        for(i=0;i<a;i++)
        {
            if(s1[i]==s2[i])
            {
                count=count+0;
            }
            else
            {
                count=count+1;
            }
        }
        if(count==1)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
    }
    else
    {
        cout<<"no";
    }
}
