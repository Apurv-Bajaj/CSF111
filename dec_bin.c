#include<stdio.h>
#include<math.h>
int main(void)
{
printf("Enter a number: ");
int n;
scanf("%d",&n);
int s,i=0;
long int b=0;
while(n!=0)
{
 s=n%2;
 n=n/2;
 b+=s*pow(10,i);
 i++;
}
printf("Binary: %li\n",b);
}
 


