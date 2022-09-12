//Binary search tree

#include<iostream.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int info;
struct node *lchild, *rchild;
};

struct node *pnew, *root=NULL, *pthis, *ppthis;
int data;
int count=0;
int loc,ds,cho;
char ch;


void create()
{    char lo;
do{
pnew=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data";
cin>>pnew->info;
	pnew->lchild=NULL;
	pnew->rchild=NULL;

		if(root==NULL)
	{
	    root=pnew;
	}

	else
	{
	pthis=root;
	while(pthis!=NULL)
	{
		 ppthis=pthis;
		 if(pnew->info<pthis->info)
		 {
		 pthis=pthis->lchild;
			if(pthis==NULL)
			{
			ppthis->lchild=pnew;

			}
		 }
		 else if(pnew->info>pthis->info)
		 {
		 pthis=pthis->rchild;
			if(pthis==NULL)
			{
			ppthis->rchild=pnew;

			}
		 }

		 }
		 }
		 cout<<"\nwant to create new node?"<<endl;
		 cin>>lo;
}while(lo !='n');

}



void searchbinary()
{
cout<<"\nEnter the data to be searched\n";
cin>>ds;
	if(root==NULL)
	{
	cout<<"Tree is empty";
	}
	else
	{
	pthis=root;
	while(pthis!=NULL)
	{
		if(ds<pthis->info)
		{
		pthis=pthis->lchild;
		}
		else if(data>pthis->info)
		{
		pthis=pthis->rchild;
		}
		else
		{
		cout<<"Data is found";
		break;
		}

	}
	if(pthis==NULL)
	{
	cout<<"Data is not found";
	}
   }
}

void inorder(struct node *p)
{
     if(p!=NULL)
	{
	 inorder(p->lchild);
	 cout<<endl<<"\t"<<p->info;
	 inorder(p->rchild);
	}

}

void preorder(struct node *p)
{
     if(p!=NULL)
	{
		 cout<<endl<<"\t"<<p->info;
	 preorder(p->lchild);

	 preorder(p->rchild);
	}

}

void postorder(struct node *p)
{
     if(p!=NULL)
	{

	 postorder(p->lchild);
	 postorder(p->rchild);
	 cout<<endl<<"\t"<<p->info;
	}

}


void main()
{
clrscr();
int choice;
cout<<"Creating binary tree"<<endl;
create();
do{
cout<<"Enter \n 1 for searching the data \n 2 for inorder traversal \n 3 for preorder  traversal \n 4 for post order traversal";
cout<<endl;

cin>>choice;
	switch(choice)
	{

	case 1:
	searchbinary();
	break;

	case 2:
	inorder(root);
	break;

	case 3:
	preorder(root);
	break;

	case 4:
	postorder(root);
	break;

	default:
	cout<<endl<<"wrong choice \n";
	}
    cout<<"do you want to continue ?"<<endl;
    cin>>ch;

}while(ch!='n');


getch();
}
