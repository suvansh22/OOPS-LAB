#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,i,j,pos,top;
string s[25];
void create();
void view();
void del();
int main()
{
	int choice;
	cout<<"enter the value of array: ";
	cin>>n;
	cout<<"1 to create"<<"\n"<<"2 to print names"<<"\n"<<"3 to delete name"<<"\n"<<"4 to insert"<<"\n"<<"5 to exit"<<"\n";
	do
	{
		cout<<"enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
				create();
				break;
			}
			case 2:	
			{
				view();
				break;
			}
			case 3:
				{
				del();
				break;
			}

				break;
			case 5:
				return 0;
		}
		
	}
	while(choice!=5);
}
void create()
{
	
	for(i=0;i<n;i++)
	{
		cout<<"student: "<<i<<":";
		cin>>s[i];
	}
}
void view()
{
	for(j=0;j<=n;j++)
	{
		cout<<s[i];
	}
}
void del()
{
	cout<<"enter the name position to be deleted: ";
	cin>>pos;
	for(i=pos;i<=n-1;i++)
	{
		s[i]==s[i+1];
	}
}

