#include<stdio.h>

int main(void)
{

int marks,sum=0,avg,min,max=0,c=0;

printf("Enter the marks(out of 100): ");
scanf("%d",&marks);
min=marks;
max=marks;
sum=marks;
avg=marks;
c=1;
int i;
printf("More students?(1/0): ");
scanf("%d",&i); 

while(i)
{
printf("Enter the marks(out of 100): ");
scanf("%d",&marks);
c++;
sum+=marks;
if(marks<min)
 min=marks;
if(marks>max)
 max=marks;
printf("More students?(1/0): ");
scanf("%d",&i); 
}
avg=sum/c;
printf("Max= %d ,Min= %d and Avg= %d",max,min,avg);
}
