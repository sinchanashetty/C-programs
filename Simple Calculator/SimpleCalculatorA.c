#include<stdio.h>
void display(float s);
float add(int x,int y);
float subtract(int x,int y);
float multiply(int x,int y);
float divide(int x,int y);
//function definition
void display(float s)
{
printf("\nAns is:%f\n",s);
}
float add(int x,int y)
{
return x+y;
}
float subtract(int x,int y)
{
return x-y;
}
float multiply(int x,int y)
{
return x*y;
}
float divide(int x,int y)
{
if(y!=0)
return (float)x/y;
else
return 0.0;
}
int main()
{
int a,b;
float ans;
unsigned char ch;
printf("Enter the two numbers separating with the single space:");
scanf("%d%d",&a,&b);
printf("Enter the arithmetic operation(+,-,* and /):");
scanf(" %c",&ch);
switch(ch)
{
//calling add function
case'+':ans=add(a,b);
break;
//calling subtract function
case'-':ans=subtract(a,b);
break;
//calling multiply function
case'*':ans=multiply(a,b);
break;
//calling divide function
case'/':ans=divide(a,b);
break;
default:printf("Invalid operation");
break;
}
//calling display function
display(ans);
return 0;
}
