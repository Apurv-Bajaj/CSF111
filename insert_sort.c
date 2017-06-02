#include<stdio.h>

int main(void)
{
int len;
printf("\nEnter the number of elements: ");
scanf("%d", &len);
int arr[len];
printf("Enter the elements: \n");

int i;

for(i=0;i<len;i++)
scanf("%d", &arr[i]);


int j,x;

for(i=1;i<len;i++)
{
j=i-1;
x=arr[i];
while(j>=0 && arr[j]>x)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=x;
}

printf("The sorted array is: \n");
for(i=0;i<len;i++)
printf("%d " , arr[i]);
}
