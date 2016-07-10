#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,i,j,count=0;
printf("Enter values for n:");
scanf("%d",&x);
y=2*x;
for(i=0;i<y;i++)
{
for(j=i+1;j<=y;j++)
 {
 printf("\n%d\t%d\n",i,j);
 count++;
 }  }
 printf("Daily walk combination is %d",count);
 getch();
}
