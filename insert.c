#include<stdio.h>
void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
 printf("%d ",a[i]);
printf("\n");
}
void insert(int a[],int n)
{
int i,j;
for(i=1;i<n;i++)
{
 int x=a[i];
 j=i-1;
 while(j>=0 && a[j]>x)
 {
  a[j+1]=a[j];
  j--;
 }
a[j+1]=x;
print(a,n);
}
}



int main(void)
{
printf("N? ");
int n;
scanf("%d",&n);
int a[n];
int i,c=0;

do
{
printf("Insert an element! ");
scanf("%d",&a[c]);
insert(a,c+1);
c++;
printf("Insert more? ");
scanf("%d",&i);
}
while(i!=0 && c<n);
}



 
 
