#include<stdio.h>
#include<math.h>
int main(void)
{
printf("Enter number of rows: ");
int n;
scanf("%d",&n);
int i;

printf("1\n");
long int z;
for(i=1;i<n;i++)
{
z=pow(11,i);
while(z!=0)
{
printf("%d ",(int)z%10);
z=z/10;
}
printf("\n");
}
}
