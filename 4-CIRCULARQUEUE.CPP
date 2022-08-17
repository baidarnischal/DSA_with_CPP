#include<iostream.h>
#include<conio.h>
int front=-1,rear=-1;
const maxsize=5;
int queue[maxsize];

void enqueue(int data)
{
if((rear==maxsize-1&&front==0)||front==rear+1)
	{
	cout<<"queue is overflow"<<endl;
	}
	else
	{
	cout<<"Enter the data \n";
	cin>>data;
	rear=(rear+1)%maxsize;
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

	if (front==rear)
	{
	cout<<"Dequed data is\n";
	cout<<queue[front]<<endl;
	front=-1,rear=-1;
	}
	else{
       cout<< "dequed element is\n"<< queue[front];
       front=(front+1)%maxsize;
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
int A=front;
  cout<<"data are \n";
while(A!=rear)
{

cout<<queue[A]<<endl;
A=(A+1)%maxsize;
}
cout<<queue[A]<<endl;
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