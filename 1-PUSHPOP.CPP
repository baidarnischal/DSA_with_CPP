#include<iostream.h>
#include<conio.h>
const int max=5;
void main(){

    clrscr();
    int a,data;
    int top=-1,stack[max];
    char ch;
    cout<<"Enter 1 for Push, 2 for POP, 3 for Display, 4 for exit \n";
    do{
cout<<"Enter the number \n";
cin>>a;
switch (a)
{
case 1: /* constant-expression */:
    if(top<max-1)
    {
        top=top+1;
        cout<<"Enter data to be stored in stack";
        cin>>data;
        stack[top]=data;
    }
    else{
        cout<<"Stack overflow\n";
    }
    break;

    case 2:
    if (top<0)
    {

        cout<<"Stack underflow\n";
    }
    else{
data = stack [top];
cout<<"The removed data is: \n"<<data<<endl;
top=top-1

    }
break;

case 3:
if (top>-1)
{
    for (int i = 0; i <=top; i++)
    {
        cout<<"Data in stack are:"<<stack[i];
    }
    
}
else{
    cout<<"Stack is empty";
}
break;
default:
    cout<<"Enter either 1 2 or 3";
    break;
}
cout<<"DO you want to continue:\n";
cin>>ch;
    }while(ch!='n');
    getch();
}