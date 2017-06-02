#include<stdio.h>

int main(void)
{
printf("Enter a number: ");
int num,n=0;
scanf("%d",&num);

while(num!=0)
{
n=(n*10)+(num%10);
num=num/10;
}
printf("Reverse number: %d",n);
}
