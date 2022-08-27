#include<iostream.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int info;
struct node *pnext;
};

struct node *pnew, *pfirst=NULL, *pthis,*ptemp;
int count=0;
int loc;
char ch;

void create()
{
pnew=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data";
cin>>pnew->info;
count++;
}

void beg()
{
 create();
if(pfirst==NULL)
	{
	pfirst=pnew;
	pfirst->pnext=NULL;
	}
else{
pnew->pnext=pfirst;
pfirst=pnew;
}
}

void end()
{
create();
if(pfirst==NULL)
{
pfirst=pnew;
}
else{
pthis=pfirst;
while(pthis->pnext!==NULL)
{
 pthis=pthis->pnext;
}
pthis->pnext=pnew;
pnew->pnext=NULL;
}
}
void specified()
{
create();
cout<<"Enter the location 1 for after specified location and 2 for before specified location\n";
cin>>loc;
	if(loc==1)
	{
	pthis=pfirst;
		for(i=1;i<loc;i++)
		{
		pthis=pthis->pnext;
		}
	     ptemp=pthis->pnext;
	     pthis->pnext=pnew;
	     pnew->pnext=ptemp;
	}
	if(loc==2)
	{
	pthis=pfirst;
		for(i=1;i<loc-1;i++)
		{
		pthis=pthis->pnext;
		}
	     ptemp=pthis->pnext;
	     pthis->pnext=pnew;
	     pnew->pnext=ptemp;
	}

}
void display()
{
ptemp=pfirst;
while(ptemp!=NULL)
{
cout<<ptemp->info;
ptemp=ptemp->pnext;
}
}

void main()
{ clrscr();
int choice;
do{
cout<<"Enter 1 for inserting at the beginning,\n 2 for inserting at the end,\n 3 for inserting node at specified position,\n 4 for display\n";
cin>>choice;
switch(choice)
{
case 1:
beg();
break;
case 2:
end();
break;
case 3:
specific();
break;
case 4:
display();
break;
default:
cout<<"wrong choice\n";
}
cout<<"do you want to continue\n";
cin>>ch;
}while(ch!='n');
getch();
}
