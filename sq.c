#include<stdio.h>

int main(void)
{
printf("Enter the size(n): ");
int n;
scanf("%d",&n);
int i,j;


for(i=1;i<=n;i++)
{
if(i==1 || i==n)
{
for(j=1;j<=n;j++)
printf("* ");
}
else
{
printf("* ");
for(j=2;j<=n-1;j++)
printf("  ");
printf("* ");
}
printf("\n");
}
}


