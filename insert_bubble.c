#include<stdio.h>

void read(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
 printf("Enter elemenet %d: ",i+1);
 scanf("%d",&a[i]);
 
}
}
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
   j=i-1;
   int x=a[i];  
  while(j>=0 && a[j]>x)
   {
    a[j+1]=a[j];
    j--;
   }
  a[j+1]=x;
  print(a,n); 
 }    
}

void bubble(int a[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
 if(a[j]>a[j+1])
   {
    t=a[j+1]; 
    a[j+1]=a[j];
    a[j]=t;
  }
 }
print(a,n);

}
}
void main(void)
{
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
int arr[n];
read(arr,n);
print(arr,n);
printf("Sort by (B/I)");
char ch;
scanf(" %c",&ch);
switch(ch)
{
case 'I':case 'i':
insert(arr,n);
break;
case 'B':case 'b':
bubble(arr,n);
break;
default:
printf("Invalid!");
}
}
 





      
