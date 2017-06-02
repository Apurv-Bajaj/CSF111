#include<stdio.h>

int main(void)
{
int n;
printf("Enter the number of elements of the first SORTED Array: ");
scanf("%d",&n);
int i,j,a[n];

for(i=0;i<n;i++)
 {
  printf("Enter element %d: ",i+1);
  scanf("%d",&a[i]);
 } 
int s;
printf("Enter the number of elements of the second SORTED Array: ");
scanf("%d",&s);
int b[n];

for(i=0;i<s;i++)
 {
  printf("Enter element %d: ",i+1);
  scanf("%d",&b[i]);
 } 

i=0;j=0;int k=0;
int c[n+s];
while(i<n && j<s)
{
 if(a[i]<=b[j])
  {
   if(a[i]==b[j]) j++;
   c[k]=a[i];
   k++;i++;
  }
 else
 {
  c[k]=b[j];
 j++;k++;
 }
}

for(;i<n;i++,k++)
 c[k]=a[i];
for(;j<s;j++,k++)
 c[k]=b[j];


for(i=0;i<k;i++)
 printf("%d ",c[i]);
}






