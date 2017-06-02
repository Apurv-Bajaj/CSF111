#include<stdio.h>

int main(void)
{
int a[]={19,21,14,7,9,6,4,8,55,36};
int i;
printf("The unsorted array is\n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
int j,t;
for(i=0;i<10;i++)
{
 for(j=0;j<10;j++)
   {
     if(a[j]>a[i])
      {
       t=a[j];
       a[j]=a[i];
       a[i]=t;
       }
    }
}
printf("The sorted array is\n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
int num;
printf("Enter the number to be searched\n");
scanf("%d",&num); 

int lo=0,hi=9,mid;

while(lo<=hi)
{
mid=(lo+hi)/2;

if(a[mid]==num)
{
printf("Found! at %d\n" , mid);
goto last;
}
else if(a[mid]<=num)
      lo=mid+1;
     else
       hi=mid-1;
}

   if(lo>hi)
     printf("Not Found!\n");
last: printf("Search completed!\n");
}










