#include<stdio.h>
int n;
void read(int **a,int n)
{
int i,j;
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  {
    printf("Enter element row %d column %d",i+1,j+1);
    scanf("%d",((a+n*i)+j));
  }
}
void transpose(int **a,int n) 
{
int i,j,t;
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
  {
    if(i!=j)
    { 
   t=*((a+n*i)+j);
   *((a+n*i)+j)=*((a+n*j)+i);
   *((a+n*j)+i)=t;
   printf("TWO TWO");
   }
  }
 printf("ONE ONE");
}
}
void print(int **a,int n)
{
int i,j;
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
   printf("%d ",*((a+n*i)+j));
  printf("\n");
 } 
}

int main(void)
{
printf("Enter the dimension: ");

scanf("%d",&n);
int a[n][n];
read((int **)a,n);
print((int **)a,n);
transpose((int **)a,n);
print((int **)a,n);
}

