#include<stdio.h>

void pat(int);
int main(void)
{
int n;
printf("Enter your choice..1 or 2..\n");
scanf("%d", &n);
pat(n);
}

void pat(int num)
{
int i,j;
if(num==1)
{ 
 
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
   printf("*");
  printf("\n");
 }
}
if(num==2)
{
for(i=1;i<=5;i++)
{
 for(j=5;j>=i;j--)
   printf("*");
  printf("\n");
 }  
}
}
