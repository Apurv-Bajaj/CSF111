#include<stdio.h>

int main(void)
{
printf("Enter the number of half-rows: ");
int n;
scanf("%d",&n);

int i,j,t=n,k;

for(i=1;i<=(n*2)-1;i++,t--)
{
if(i<=n)
{
for(j=1;j<t;j++)
printf("  ");
for(k=1;k<i;k++)
printf("%d ",k);
printf("%d ",i);
for(k=i-1;k>=1;k--)
printf("%d ",k);

}
else
{ 
int z=n*2-i;
int c=n-z;
for(j=1;j<=c;j++)
printf("  ");

for(j=1;j<z;j++)
printf("%d ",j);
printf("%d ",z);
for(j=z-1;j>=1;j--)
printf("%d ",j);

}
printf("\n");
}
}

