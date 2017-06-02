#include<stdio.h>

int main(void)
{
printf("Enter n: ");
int n;
scanf("%d",&n);
int a=0,b=1,c;
printf("Fibonacci Series: %d %d",a,b);

do
{
c=a+b;
a=b;
b=c;
if(c<=n)
printf(" %d",c);
else
 break;
}
while(c<n);
}

