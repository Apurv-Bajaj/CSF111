#include<stdio.h>

int check(float x)
{
int y=(int)x;
if((float)y==x)
 return 1;
return 0;
}

void insert(float a[],int n)
{
int i,j,x;
for(i=1;i<n;i++)
{
x=a[i];
j=i-1;
while(a[j]<x && j>=0)
{
 a[j+1]=a[j];
 j--;
}
a[j+1]=x;
}
}
int main(void)
{
printf("Enter 10 real nos.:\n");
int i,c=0;float z;float a[10];
for(i=0;i<10;i++)
{
 scanf("%f",&z);
 if(check(z))
  {
   a[c]=z;c++;
   insert(a,c);
   printf("Sorted list now:\n "); 
   for(int j=0;j<c;j++)
    printf("%.4f ",a[j]);
   printf("\n"); 
 }
}   
printf("\nTotal no. of non-real int: %d ",10-c);
}



