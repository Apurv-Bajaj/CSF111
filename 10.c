#include<stdio.h>

int main(void)
{
printf("Enter the number of rows: ");
int n;
scanf("%d",&n);
int i,j,r=n;

for(i=1;i<=n;i++)
{
for(j=1;j<=r;j++)
printf("%d ",j);

for(j=1;j<i;j++)
printf("    ");

for(j=r;j>=1;j--)
printf("%d ",j);
r--;
printf("\n");
}
}

