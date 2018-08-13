#include<iostream>
#include<ma>
using namespace std;
int main()
{
	int a,b,s;
	cout<<"enter a number: ";
	cin>>a;
	b=a;
	if(a>=1000&&a<=9999)
	{
		if(a/10==(a%10)/10&&(a%100)/10==(a%100)%10)
		{
		s=sqrt(b);
			if(s*s==b)
          	{
		     cout<<"yes";
        	}
		}
		
	}

}
	
