#include<stdio.h>
#define rows 4
#define cols 4
int a[rows][cols];
void input()
{
int i,j;
for(i=0;i<rows;i++)
 for(j=0;j<cols;j++)
  {
    printf("Enter element %d %d: ",i+1,j+1);
    scanf("%d",&a[i][j]);
   }
}
void print()
{
int i,j;
for(i=0;i<rows;i++)
 {for(j=0;j<cols;j++)
   printf("%d ",a[i][j]);
   printf("\n");}
}
void suppress()
{
int k,i,j,t;
for(k=0;k<rows;k++)
{
 for(i=0;i<cols;i++)
 {
 for(j=0;j<cols-1-i;j++)
 { 
   if(a[k][j]==0)
    {
     t=a[k][j+1];
     a[k][j+1]=a[k][j];
     a[k][j]=t;
    }
  }
}
}
}
int main(void)
{
 input();
 print();
 suppress();
 print();
}
