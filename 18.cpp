#include<iostream>
#include<string.h>
using namespace std;
class Anagram
{
    int n,i,j,n2,c2=0,c,a;
    string s[100],v;
    void get()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
    }
    void count()
    {
        for(i=0;i<n;i++)
        {
         v=s[i];
         c=0;
         a=0;
         n2=v.length();
         if(n2==6)
         {
             for(j=0;j<n2;j++)
             {
                 switch(v[j])
                 {
                 case 'k':c++;break;
                 case 'a':if(a<2){c++;a++;}break;
                 case 'b':c++;break;
                 case 'l':c++;break;
                 case 'i':c++;break;
                 }
             }
             if(c==6)
             {
                 c2++;
             }
         }
        }
    }
    void put()
    {
        cout<<c2;
    }
    public:
    Anagram()
    {
        get();
        count();
        put();
    }
};
int main()
{
   Anagram e;
   return 0;
}
