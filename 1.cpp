#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char s[20];
	int len,i;
	cin.getline(s,20);
	len=strlen(s);
	for(i=len;i>=0;i--)
	{
	    cout<<s[i];
	}
	return 0;
}

