#include<stdio.h>

int bsearch(int arr[],int b,int lo,int hi);
int main(void)
{
printf("How many numbers are to be searched? ");
int l;
scanf("%d", &l);
printf("Enter the numbers:  ");

int i;
int a[l];
for(i=0;i<l;i++)
{
scanf("%d", &a[i]);
}
int j,t;
for(i=0;i<l;i++)
{
 for(j=0;j<l;j++)
  {
   if(a[i]<a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
     }
    }
  }
printf("\nThe sorted array: ");
for(i=0;i<l;i++)
printf("%d ",a[i]);
int x;
printf("Enter the number to be searched: ");
scanf("%d",&x);
int f=bsearch(a,x,0,l-1);
if(f==0)
printf("Not Found!");
else
printf("Found!");
}


int bsearch(int arr[],int b,int lo,int hi)
{
int mid=(lo+hi)/2;
if(lo<=hi)
{
if(arr[mid]==b)
 return 1;
else if(arr[mid]<b)
    {
     int c=bsearch(arr,b,mid+1,hi);
       return c;
     }
else 
   {
    int d=bsearch(arr,b,lo,mid-1);
    return d;
    }
}
else
return 0;
} 






















