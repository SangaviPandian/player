#include<iostream>
using namespace std;
int main()
{
    string S;
    int count=1,max=1;
    char character;
    cin>>S;
    for(int i=0;i<S.length();i++)
    {
        for(int j=i+1;j<S.length();j++)
        {
            if(S[i]==S[j])
            {
                count++;
                if(count>max)
            {
                max=count;
                character=S[i];
            }
            }
        }
    }
    cout<<character;
}
