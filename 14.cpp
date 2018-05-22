#include<iostream>
using namespace std;
int main()
{
    int N,count,i,j=0;
    string S;
    char s[100];
    cin>>N;
    cin>>S;
    for(i=0;i<N;i++)
    {
    if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
    {
        count=1;
    }
    else
    {
        s[j]=S[i];
        j++;
    }
    }
    for(i=0;i<N-1;i++)
    {
        cout<<s[i];
    }
   for(i=N-1;i>=0;i--)
    {
       cout<<s[i];
    }
}
