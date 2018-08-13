#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,i;
	for(i=1000;i<=9999;i++)
	{
		if(i%10==(i/10)%10&&(i/100)%10==(i/1000)%10)
		{
			a=sqrt(i);
			if(a*a==i)
			{
				cout<<"answer = "<<i;
			}
		}
	}
}
