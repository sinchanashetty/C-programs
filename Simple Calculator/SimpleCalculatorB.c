#include<stdio.h>
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
return x/y;
}
int main()
{
int a,b;
float ans;
unsigned char ch;
float(*ptr_op)(int,int);
//pointer to function declaration
float(*ptr_disp)(float);
ptr_disp=display;
//pointer initialization
printf("enter the two numbers separating with space=",a,b);
scanf("%d %d",&a,&b);
printf("enter the arithmetic operation(+,-,* or /):");
scanf(" %c",&ch);
switch(ch)
{
case'+':ptr_op=add;
break;
//add function assigned to pointer
case'-':ptr_op=subtract;
break;
//subtract function assigned to pointer
case'*':ptr_op=multiply;
break;
//multiply function assigned to pointer
case'/':ptr_op=divide;
break;
//divide function assigned to pointer
default:printf("invalid operation");
break;
}
ans=(*ptr_op)(a,b);
//function call using function pointer to perform the operations
(*ptr_disp)(ans);
return 0;
}
