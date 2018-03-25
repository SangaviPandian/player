#include<iostream.h>
#include<string.h>
void main()
{
char s[30];
int l;
cout<<"Enter string\n";
gets(s);
l=strlen(s);
s[l]='.';
cout<<"Appended string:"<<s;
}

