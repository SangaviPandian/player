#include<iostream>
using namespace std;
int main()
{
    string day;
    cout<<"enter the day"<<endl;
    cin>>day;
    if(day[0]=='s'||day[0]=='S')
    {
        cout<<"holiday";
    }
    else 
    {
        cout<<"working day";
    }
    
}
