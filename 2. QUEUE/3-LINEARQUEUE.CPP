#include<iostream.h>
#include<conio.h>
int front=-1,rear=-1;
const maxsize=5;
int queue[maxsize];

void enqueue(int data)
{
if(rear==maxsize-1)
	{
	cout<<"queue is overflow"<<endl;
	}
	else
	{
	cout<<"Enter the data \n";
	cin>>data;
	rear=rear+1;
	if(front==-1)
	{
	front=0;
	queue[rear]=data;
	}
	else
	{
	queue[rear]=data;
	}
	}
}
void dequeue()
{
	if(front==-1)
	{
	cout<<"Underflow"<<endl;
	}
       if(front>rear)
	{
	front=-1;
	rear=-1;
	}
	else
	{
	cout<<queue[front]<<endl;
	front=front+1;
	}
}
void display()
{
if(front==-1)
{
cout<<"empty\n";
}
else
{
for(int i=front; i<=rear; i++)
{
cout<<"data are \n";
cout<<queue[i];
}
}
}
void main()
{ int a,data;
char ch;
clrscr();
do{
cout<<"Enter 1 for enqueue, 2 for dequeue, 3 for display"<<endl;
cin>>a;
switch(a)
{
case 1:
enqueue(data);
break;

case 2:
dequeue();
break;

case 3:
display();
break;


default:
cout<<"Enter value either 1 2 or 3 ";
break;
}
cout<<"Do you want to continue";
cin>>ch;
}
while(ch!='n');



getch();
}