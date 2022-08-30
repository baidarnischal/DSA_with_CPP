#include<iostream.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int info;
struct node *pnext;
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
	plast->pnext=pfirst;
	}
else{
pnew->pnext=pfirst;
pfirst=pnew;
plast->pnext=pfirst;
}
}

void end()
{
create();
if(pfirst==NULL)
{
pfirst=pnew;
plast=pnew;
plast->pnext=pfirst;

}
else{
plast->pnext=pnew;
plast=pnew;
plast->pnext=pfirst;
}
}
/*void specified()
{
create();
cout<<"Enter the location 1 for after specified location and 2 for before specified location\n";
cin>>loc;
	if(loc==1)
	{
	pthis=pfirst;
		for(int i=1;i<loc;i++)
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
		for(int i=1;i<loc-1;i++)
		{
		pthis=pthis->pnext;
		}
	     ptemp=pthis->pnext;
	     pthis->pnext=pnew;
	     pnew->pnext=ptemp;
	}

} */
void display()
{
if(pfirst==NULL)
{
cout<<"Empty";
}
else{
pthis=pfirst;
while(pthis->pnext!=pfirst)
{
cout<<pthis->info;
pthis=pthis->pnext;
}
cout<<pthis->info;
}
}

	void dbeg()
	{
	 if(pfirst==NULL)
		{
		cout<<"print list is empty";
		}
	 else if(pfirst==plast)
	 {
	 free(pfirst);
	 pfirst=NULL;
	 plast=NULL;
	 }
	 else
	 {
	 ptemp=pfirst->pnext;
	 free(pfirst);
	 pfirst=ptemp;
	 plast->pnext=pfirst;
	}
	}

	void dend()
	{
	 if(pfirst==NULL)
		{
		cout<<"print list is empty";
		}
	 else if(pfirst==plast)
	 {
	 free(pfirst);
	 pfirst=NULL;
	 plast=NULL;
	 }
	 else {
	 pthis=pfirst;
	 while(pthis->pnext!=plast)
	 {
	  pthis=pthis->pnext;
	  }
	  free(plast);
	  plast=pthis;
	  plast->pnext=pfirst;


	}
	}

      /*	void dspecified()
	{
	cout<<"Enter the location of the node to be deleted \n";
	cin>>loc;
	pthis=pfirst;
	for(int i=1;i<loc-1;i++)
	{
	pthis=pthis->pnext;
	}
	ptemp=pthis->pnext->pnext;
	free(pthis->pnext);
	pthis->pnext=ptemp;
	} */

void main()
{ clrscr();
int choice;
do{
cout<<"Enter 1 for inserting at the beginning,\n 2 for inserting at the end, \n 3 for display, \n 4 for deleting from beginning\n 5 for deleting from end\n";
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