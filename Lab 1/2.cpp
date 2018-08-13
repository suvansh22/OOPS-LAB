#include<iostream>
using namespace std;
int main()
{
	int a,i=0,s;
	cout<<"enter a number: ";
	cin>>a;
	while(a!=0)
	{
		s=a%10;
		a=a/10;
		i++;
	}
	cout<<"no of digits: "<<i;
}
