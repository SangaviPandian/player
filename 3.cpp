#include<iostream>
using namespace std;
int main() 
{
	int i,j,shift=0;
	char s1[100];
	for(i=0;i<3;i++)
	{
	    cin>>s1[i];
	}
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=i+1;s1[j]!='\0';j++)
		{
			if(s1[i]>s1[j])
			{
				shift=s1[i];
				s1[i]=s1[j];
				s1[j]=shift;
			}
		}
	}
	cout<<s1;
  return 0;
}

