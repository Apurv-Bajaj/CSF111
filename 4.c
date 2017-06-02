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

j=a[0];

for(i=1;i<n;i++)
{
 if(j>a[i])
   j=a[i];
}//smallest element
printf("%d \n",j);
int h=a[0];
for(i=0;i<n;i++)
 if(h==j)
   h=a[i];
for(i=0;i<n;i++)
{
 if(a[i]>j)
  {
    if(h>a[i])
      h=a[i];
  }
}
printf("%d \n",h);
}

