#include<stdio.h>

int main(void)
{
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
int i,j,a[n];

for(i=0;i<n;i++)
 {
  printf("Enter element %d (0 or 1): ",i+1);
  scanf("%d",&a[i]);
 } 

int k=0;
for(i=0;i<n;i++)
 {
  if(a[i]==0) k++;
 } 
for(i=0;i<k;i++)
 {
  a[i]=0;
 } 
for(;i<n;i++)
 {
  a[i]=1;
 } 
for(i=0;i<n;i++)
 {
  printf("%d " ,a[i]);
  
 }
}
 


