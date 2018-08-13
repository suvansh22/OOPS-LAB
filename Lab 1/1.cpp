#include<iostream>
using namespace std;
int main()
{
	int i,s,j;
	cout<<"enter the value of i and j: ";
	cin>>i>>j;
	if(i/j==0)
	{
		cout<<"answer = "<<i;
	}
	else
	{
		s=i%j;
		cout<<"answer = "<<i+j-s;
	}
}
