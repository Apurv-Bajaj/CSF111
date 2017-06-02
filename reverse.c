#include<stdio.h>
int reverse(int x)
{
int b=0;
while(x!=0)
{
b=(b*10)+(x%10);
x=x/10;
}
return b;
}

int main(void)
{
printf("number? ");
int n,rn;
scanf("%d",&n);
rn=reverse(n);
printf("\nReverse=%d",rn);
}
 

