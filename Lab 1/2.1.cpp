#include<iostream>
using namespace std;
int insert(int *a);
int view(int *a);
int del(int *a);
int main()
{
	int choice,i=0,ch,jump,ar[100];
	cout<<"1 for entering name"<<"\n";
	cout<<"2 for printing name"<<"\n";
	cout<<"3 for deleting name"<<"\n";
	cout<<"enter the choice: ";
	cin>>choice;
	jump:
	switch(choice)
	{
		case 1:
			insert(ar);
			break;
		case 2:
			view(ar);
			break;
		case 3:
			del(ar);
			break;
	}
	i++;
	if(i>1)
	{
		cout<<"again";
		cin>>ch;
		if(ch==1)
		{
			goto jump;
		}
	}
}
	int insert(int *a)
	{
		int n,i;
		cout<<"insert the value of array: ";
		cin>>n;
		for(i=0;i<=n;i++)
		{
			cin>>a[i];
		}
		return *a;
	}
	int view(int *a)
	{
		int i;
		for(i=0;a[i]!=NULL;i++)
		{
			cout<<a[i];
		}
		return *a;
	}

