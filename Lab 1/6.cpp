#include<iostream>
using namespace std;

int main()
{
	char s1[50],s2[50];
	char *p;
	p=s2;
	int len=0,i=0;
	cout<<"enter the first string: ";
	cin.getline(s1,sizeof(s1));
	cout<<"enter the second string: ";
	cin.getline(s2,sizeof(s2));
	while(s1[i]!='\0')
	{
	len++;
	i++;
    }
    for(i=0;*p!='\0';i++)
    {
    	s1[len+i]=p[i];
	}
	cout<<s1;
	
}
