//Doubly Linear
#include<iostream.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int info;
struct node *pnext, *prev;
};

struct node *pnew, *pfirst=NULL, *pthis,*ptemp,*plast;
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
	plast=pnew;
	pfirst->pnext=NULL;
	pfirst->prev=NULL;

	}
else{
pnew->pnext=pfirst;
pfirst->prev=pnew;
pfirst=pnew;
pfirst->prev=NULL;
}
}

void end()
{
create();
if(pfirst==NULL)
{
pfirst=pnew;
plast=pnew;
pfirst->pnext=NULL;
pfirst->prev=NULL;
}
else{
plast->pnext=pnew;
pnew->prev=plast;
plast=pnew;
pnew->pnext=NULL;
}
}

void display()
{
pthis=pfirst;
cout<<"/n The elements are:"<<endl;
while(pthis->pnext!=NULL)
{
cout<<pthis->info<<endl;
pthis=pthis->pnext;
}
cout<<pthis->info<<endl;
}

	void dbeg()
	{
	 if(pfirst==NULL)
		{
		cout<<"print list is empty";
		}
	 else if(pfirst->pnext==NULL)
	 {
	 free(pfirst);
	 pfirst=NULL;
	 plast=NULL;
	 }
	 else
	 {
	 pfirst=pfirst->pnext;
	 free(pfirst->prev);
	 pfirst->prev=NULL;
	}
	}

	void dend()
	{
	 if(pfirst==NULL)
		{
		cout<<"print list is empty";
		}
	 else if(pfirst->pnext==NULL)
	 {
	 free(pfirst);
	 pfirst=NULL;
	 plast=NULL;
	 }
	 else {
	 plast=plast->prev;
	  free(plast->pnext);
	  plast->pnext=NULL;


	}
	}



void main()
{ clrscr();
int choice;
do{
cout<<"Enter 1 for inserting at the beginning,\n 2 for inserting at the end,\n 3 for display\n 4 for deleting from beginning\n 5 for deleting from end\n";
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
display();
break;

case 4:
dbeg();
break;

case 5:
dend();
break;

default:
cout<<"wrong choice\n";
}
cout<<"\ndo you want to continue\n";
cin>>ch;
}while(ch!='n');
getch();
}
