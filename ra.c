#include<stdio.h>

int main(void)
{
int n;
scanf("%d",&n);

int i,j;

for(i=1;i<=(2*n)-1;i++)
{
if(i<=n)
{
for(j=1;j<2*i;j++)
{
if(j==1)
continue;
printf("  ");
}
for(j=n;j>=i;j--)
printf("* ");

}

else
{
int k;
if(i==n+1)
k=n%2?n+1:n+2;

for(j=k;j>=1;j--)
printf("  ");
for(j=0;j<=i-n;j++)
printf("* ");
k=k-2;
}
printf("\n");
}
}
