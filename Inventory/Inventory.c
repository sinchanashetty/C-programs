#include<stdio.h>
int main()
{
FILE *fp;//pointer
typedef struct
{
int no;
char name[20];
float price;
}Asset;
Asset a;
int choice;
//open file for writing in append mode
fp=fopen("invt.txt","a");
if(fp==NULL)
{
printf("File does not exist\n");
return;
}
do
{
//read and print the asset number
printf("\nEnter the Asset no:");
scanf("%d",&a.no);
fprintf(fp,"Asset No=%d\n",a.no);
//read and print the asset name
printf("\nEnter the Asset Name:");
scanf("%s",&a.name);
fprintf(fp,"Asset Name=%c\n",a.name);
//read and print the asset price
printf("\nEnter the Asset price:");
scanf("%f",&a.price);
fprintf(fp,"Asset No=%f\n",a.price);//print in the file
printf("\nDo you want to add another record Yes=1 or No=0:");
scanf("%d",&choice);
}while(choice);
printf("\n Thank You\n");
fclose(fp);//close the file
return 0;
}
