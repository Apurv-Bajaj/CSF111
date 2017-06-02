#include<stdio.h>

int main(void)
{
int x;
printf("Enter X: ");
scanf("%d",&x);
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
int i,j,a[n];

for(i=0;i<n;i++)
 {
  printf("Enter element %d: ",i+1);
  scanf("%d",&a[i]);
 } 
 int c=0;
for(i=0;i<n;i++)
{
 
 for(j=i+1;j<n;j++)
  {
   if(a[i]+a[j]==x)
    {
    printf("%d + %d = %d\n",a[i],a[j],x);
    c++;
   }
  }
}
if(c==0)
 printf("Nope!");
}


