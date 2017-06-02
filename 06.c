#include<stdio.h>

int main(void)
{
printf("Enter half-rows: ");
int n;
scanf("%d",&n);
int i,j;


for(i=1;i<=(n*2)-1;i++)
{
if(i<=n)
{
for(j=1;j<=i;j++)
printf("# ");

}
else
{
for(j=n-1;j>=i-n;j--)
{
printf("# ");
}
}
printf("\n");
}
}
