#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n>1)
	{
	 return n*factorial(n-1);
	}
	else if(n=1)
	{
		return 1;
	}
	
}
int main()
{
	int i;
	cout<<"enter the number to find factorial: ";
	cin>>i;
	cout<<factorial(i);
	
}
