#include<stdio.h>

int lcm(int sm,int bi,int i);
int main(void)
{
int n1,n2;
printf("Enter the numbers : \n");
scanf("%d %d", &n1,&n2);
int b=n1>n2?n1:n2;
int s=n1>n2?n2:n1;

int l=lcm(s,b,1);
printf("LCM: %d",l);
}


int lcm(int sm,int bi,int i)
{
if((bi*i)%sm==0)
 return (bi*i);
else
 { 
 return lcm(sm,bi,i+1);
}
 }

