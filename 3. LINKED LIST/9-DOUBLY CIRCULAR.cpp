//Double Circular
#include<iostream.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int info;
struct node *pnext, *prev;
};

struct node *pnew, *pfirst=NULL, *head, *pthis,*ptemp,*plast;
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
if(head->pnext==head)
	{
       head->pnext=pnew;
	pnew->prev=head;
	head->prev=pnew;
	pnew->pnext=head;

	}
else
	{
	ptemp=head->pnext;
	head->pnext=pnew;
	pnew->prev=head;
	pnew->prev=pnew;
	pnew->pnext=head;
	}
}

void end()
{
create();
if(head->pnext==head)
	{
       head->pnext=pnew;
	pnew->prev=head;
	head->prev=pnew;
	pnew->pnext=head;

	}
else
	{
	ptemp=head->prev;
	head->prev=pnew;
	pnew->pnext=head;
	ptemp->pnext=pnew;
	pnew->prev=ptemp;
	}
}

void display()
{
pthis=head->pnext;
cout<<"\n The elements are:"<<endl;
	while(pthis->pnext!=pfirst)
	{
		cout<<pthis->info<<endl;
		pthis=pthis->pnext;
	}
cout<<pthis->info<<endl;
}

void dbeg()
{
	 if(head->pnext==head)
		{
		cout<<"print list is empty";
		}

	 else
	 {
	 ptemp=head->pnext->pnext;
	 free(head->pnext);
	 head->pnext=ptemp;
	 ptemp->prev=head;
	}
}

	void dend()
	{
	 if(head->pnext==head)
		{
		cout<<"print list is empty";
		}
	 else
	 {
	 ptemp=head->pnext->pnext;
	 free(head->pnext);
	 head->pnext=ptemp;
	 ptemp->prev=head;
	 }

	}



void main()
{
clrscr();
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
