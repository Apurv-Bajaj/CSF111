#include<stdio.h>
#include<math.h>
int main(void)
{
printf("Enter the index: ");
int n;
scanf("%d",&n);
float x=pow(2,n);
float y=pow(2,-n);
printf("%d\t1/%d\t%f",n,(int)y,x);
}
