#include<stdio.h>

int main(void)
{
printf("Enter the number of rows: ");
int n;
scanf("%d",&n);
int i,j,a=1,d;



for(i=1;i<=n;i++,a=a+2)
{
for(j=n-1;j>=i;j--)
printf("  ");
int k;
for(j=a-i+1;j<a;j++)
{
k=j%10;
printf("%d ",k);
}

k=a%10;
printf("%d ",k);

for(j=a-1;j>=a-i+1;j--)
{
k=j%10;
printf("%d ",k);
}
printf("\n");
}
}

