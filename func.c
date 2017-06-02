#include<stdio.h>
void bubble(int a[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
{
 for(j=0;j<n-i-1;j++)
  {
    if(a[j]>a[j+1])
     {
       t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
      }
  }
}
}
void b_search(int a[],int n,int k)
{
 int lo=0,hi=n-1;
 int mid;
 
while(lo<=hi)
{
 mid=(lo+hi)/2;
 if(a[mid]==k)
   break;
 else if(a[mid]<k)
        lo=mid+1;
     else
        hi=mid-1;
 }

if(lo<=hi)
 printf("Found at %d\n",mid);
else
 printf("Not found!");
}
void input(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Enter element %d: ",i+1);
scanf("%d",&a[i]);
}
}
void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
int main(void)
{
printf("Enter the number of elments: ");
int n;
scanf("%d",&n);
printf("\n");
int a[n];
input(a,n);
bubble(a,n);
print(a,n);
int x;
scanf("%d",&x);
b_search(a,n,x);
}





  
