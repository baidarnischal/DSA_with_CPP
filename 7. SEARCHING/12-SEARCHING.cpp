#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	int i, a[30],n,data,loc=-1,choice,beg=0,end,mid,item,loc1;
	char ch;

	do
	{
	cout<<"Enter 1 for linear and 2 for binary search";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the number of datas"<<endl;
			cin>>n;
			cout<<"Enter the datas one by one";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			cout<<"Enter the data to be searched"<<endl;
			cin>>data;
		
			for(i=0;i<n;i++)
			{
				if(data==a[i])
				{
					loc=i;
				}
		 	}
				if(loc>=0)
				{
					cout<<"Data is found and searching is successful"<<endl;
				}
				else
				{
					cout<<"Data is not found and searching is unsuccessful"<<endl;
				}	
				break;
			
		case 2:	
				cout<<"Enter the number of datas"<<endl;
				cin>>n;
				end=n-1;
				mid=(beg+end)/2;
				cout<<"Enter the datas one by one";
				for(i=0;i<n;i++)
				{
					cin>>a[i];
				}
				cout<<"Enter the data to be searched"<<endl;
				cin>>item;
					while(beg<=end && a[mid]!=item)
					{
						if(item<a[mid])
						{
							end=mid-1;
						}
						else
						{
							beg=mid+1;
						}
						mid=(beg+end)/2;
					}
					
					if(a[mid]==item)
					{
						loc1=mid;
						cout<<"Data is found at location -->"<<loc1<<endl;
					}
					else
					{
						cout<<"Data doesn't exist";
					}	
					break;
				}
				cout<<"Do you want to continue";
				cin>>ch;
				}while(ch=='y'||ch=='Y');
	return 0;
}
