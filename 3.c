#include<stdio.h>

int main(void)
{
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
int i,j,a[n];

for(i=0;i<n;i++)
 {
  printf("Enter element %d: ",i+1);
  scanf("%d",&a[i]);
 } 
for(i=0;i<n;i++)
{
 
 for(j=i+1;j<n;j++)
  {
   if(a[j]>=a[i])
     break;
  }
if(j==n)
 printf("%d ",a[i]);
}
}

