#include <iostream>
using namespace std;
int main() 
{
	string str;
	int i,n;
	cin>>str;
	n=str.length();
	for(i=0;i<n;i++)
	{
		if(str[i]>87&&str[i]<91||str[i]>119&&str[i]<123)
		str[i]=str[i]-23;
		else
		str[i]=str[i]+3;
	}
	cout<<str;
	return 0;
}
