#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s1[50],*p;
	int j=0;
	p=s1;
	cout<<"enter the string 1: ";
	cin.getline(s1,sizeof(s1));
	while(*p!='\0')
	{
		p++;
		j++;
	}
	cout<<"lenght: "<<j;
}
