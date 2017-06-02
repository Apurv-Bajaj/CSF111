#include<stdio.h>

int check(int n)
{
int x=0;
while(n!=0)
{
x++;
n=n/10;
}

return x;
} 

void process(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
 int x=check(a[i]);
 a[i]=a[i]/10;
 int y=x-1;int r=0;
 while(y!=0)
 { 
  r=(r*10)+(a[i]%10);
  a[i]/=10;y--;
 }
a[i]=r/10;
}
}
int main(void)
{
int a[10];
int c=1;
printf("Enter 10 natural numbers >100\n" );
do
{
printf("Enter number %d: ",c);
int x;
scanf("\n%d",&x);
if(x>100)
{a[c-1]=x;
c++;
}
else
 printf("\nRe-enter!\n");
}
while(c<=10);
process(a,10);
for(int i=0;i<10;i++)
printf("%d ",a[i]);
}





 

   
