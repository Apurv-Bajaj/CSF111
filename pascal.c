#include<stdio.h>
int fact(int x)
{
int p=1;

while(x>0)
{
p=p*x;
x--;
}
return p;
}

int com(int n,int r)
{
int p=fact(n)/(fact(r)*fact(n-r));
return p;
}

int main(void)
{
printf("Rows? ");
int n;
scanf("%d",&n);
printf("\n");
int i,j;
for(i=0;i<n;i++)
{
 for(j=0;j<i+1;j++)
  printf("%d ",com(i,j));
 printf("\n");
}
}
