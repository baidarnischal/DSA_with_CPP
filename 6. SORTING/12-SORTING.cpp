
//sorting
#include<iostream.h>
#include<conio.h>

int a[10],n,i,temp,j,k,choice;
 char w;
void read()
{
		cout<<"Enter the number of data to enter"<<endl;
		cin>>n;
		cout<<"Enter datas"<<endl;
		 for(i=0;i<n;i++)
		 {
		 cin>>a[i];
		 }
}
void display()
{
	 for(i=0;i<n;i++)
	 {
		cout<<a[i]<<"\t";
	 }
}
void dsort()
{
	for(k=0;k<n;k++)
		{
		cout<<a[k]<<"\t";
		}
		cout<<endl;
}

void bubble()
{
	read();
	for(i=0;i<n-1;i++)
	{

		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}

		}

		dsort();

	}
	cout<<"The arranged data are:"<<endl;
		display();
}

void insert()
 {
	read();
	for(i=0;i<n;i++)
	{
	temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp<a[j])
			a[j+1]=a[j];

			else
			break;
		  }
		a[j+1]=temp;
	dsort();
	}
 cout<<"Arranged data are"<<endl;
 display();
 }
void select()
{
read();
	for(i=0;i<n;i++)
	{

		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}

		}

		dsort();

	}
	cout<<"The arranged data are:"<<endl;
		display();
}
void main()
{
clrscr();
do{
cout<<"Enter 1 for bubble, 2 for insertion, 3 for selection"<<endl;
cin>>choice;

switch(choice)
{
 case 1:
	bubble();
	break;

case 2:
	insert();
	break;

case 3:
	select();
	break;

default:
	cout<<"wrong choice!!!!";
}
cout<<endl<<"Do you want to continue";
cin>>w;
}while(w!='n');
getch();


}
