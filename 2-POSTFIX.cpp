#include<iostream.h>
#include<conio.h>
int top=-1;
const int max=10;
int stack[max];
void push(int data){
    top++;
    stack[top]=data;
}
void main(){
clrscr();
int a,b,c,i=0,data;
char postfix[max];
cout<<"Enter the Postfix exp";
cin>>postfix;
while (postfix[i]!=')'){
    if(postfix[i]=='*'||postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='/')
{
a=stack[top];
b=stack[top-1];
top=top-2;
if(postfix[i]=='*'){
    c=b*a;
}
elseif(postfix[i]=='+'){
    c=b+a;
}
elseif(postfix[i]=='-'){
    c=b-a;
}
else{
    c=b/a;
}
push(c);
}
else
{
    data=postfix[i]-48;
    push(data);
}
i++;
}
cout<<stack[top]<<"is the result";


    getch();
}