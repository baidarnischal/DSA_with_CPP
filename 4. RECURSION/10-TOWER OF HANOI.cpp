//Recursion
#include<iostream.h>
#include<conio.h>
void TOH(int, char, char, char);
void main()
{
clrscr();
int n;
cout<<"Enter the number of disk"<<endl;
cin>>n;
TOH(n,'S','M','D');

getch();

}
void TOH(int n, char S, char M, char D)
{
if(n>0)
{

TOH(n-1,S,D,M);
cout<<"move a disk from "<<S<<"to"<<D<<endl;
TOH(n-1,M,S,D);
}
}
