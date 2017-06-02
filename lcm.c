#include<stdio.h>

int main(void)
{
int n1,n2;
printf("Enter the numbers : \n");
scanf("%d %d", &n1,&n2);
int l=(n1>n2)?n1%n2:n2%n1;
if(l==0)
 {
  if(n1>n2)
   printf("LCM: %d\n",n1);
  else
   printf("LCM: %d\n",n2);
 }
else
{
int i=1,k=2;
int b=(n1>n2)?n1:n2;
int s=(n1>n2)?n2:n1;
while(i)
{ 
 if((k*b)%s==0)
 {
  printf("LCM: %d\n", (k*b));
  i=0;
 }
else
 k++; 
}
}
}


