#include<stdio.h>
int check(int x,int a[],int k);
int main(void)
{
printf("Enter the number of elements: ");
int n;
scanf(" %d",&n);
int i,j;
int a[n],b[n];
for(i=0;i<n;i++)
 {
  printf("Enter element %d: ",i+1);
  scanf(" %d",&a[i]);
 }
 b[0]=a[0];
 int k=1;
for(i=1;i<n;i++)
{
if(check(a[i],a,i-1))
  {
  b[k]=a[i];
  k++;
  }
}
printf("\n");
for(i=0;i<k;i++)
 printf("%d ",b[i]);

} 

int check(int x,int a[],int k)
{
 int i;
 for(i=0;i<=k;i++)
  if(a[i]==x)
   return 0;
  return 1;
}
    
 
