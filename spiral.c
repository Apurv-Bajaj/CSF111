#include<stdio.h>

int main(void)
{
printf("Enter the size(n): ");
int n;
scanf("%d",&n);
int a[n][n];
printf("Enter the elements: ");
int i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

printf("The array is: \n");
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
}

