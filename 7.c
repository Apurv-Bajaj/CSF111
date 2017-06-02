#include<stdio.h>

int main(void)
{
int n;
printf("Enter the n (square matrix): ");
scanf("%d",&n);
int i,j,a[n][n];

for(i=0;i<n;i++)
 { 
  for(j=0;j<n;j++)
  {
  printf("Enter element %d %d: ",i+1,j+1);
  scanf("%d",&a[i][j]);
 }
 printf("\n"); 
}

for(i=0;i<n;i++)
 { 
  for(j=0;j<n;j++)
  {
   if(a[i][j]!=a[j][i])
     goto ab;
  }
}


ab:if(i==n)
 printf("Symmetric");
else
 printf("Lite");
}
