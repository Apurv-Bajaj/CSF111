#include<stdio.h>

int main(void)
{
printf("Length of array? ");
int l;
scanf("%d",&l);
int a[l];
int i;
printf("Enter the numbers!: ");
for(i=0;i<l;i++)
scanf("%d",&a[i]);
int j,t;

for(i=0;i<l;i++)
 for(j=0;j<l;j++)
  {
    if(a[j]>a[i])
     {
      t=a[j];
      a[j]=a[i];
      a[i]=t;
     }
  }

printf("Smallest element= %d and 2nd smallest element= %d",a[0],a[1]);
}


