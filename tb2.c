#include<stdio.h>
#define cols 3
#define rows 3
int pay[rows][cols]={0},id[rows];
int eId,range;
void populate(void)
{
int i;
for(i=0;i<rows;i++)
  {
   if(pay[i][0]>36)
    pay[i][2]=(pay[i][0]-36)*2*pay[i][1];
  }
}

int check(void)
{
 int i;
 for(i=0;i<rows;i++)
  if(id[i]==eId)
   break;
int f=0;
if(i<rows)
{
 int c=pay[i][2]-range;
 int d=pay[i][2]+range;
 for(int k=0;k<rows;k++)
   if(pay[k][2]>=c && pay[k][2]<=d)
    f++;
 return f;
}
return -1;
}
void print(void)
{
 int i,j;
 for(i=0;i<rows;i++){
  for(j=0;j<3;j++)
   printf("%d ",pay[i][j]);
   printf("\n");
 }
}
void input()
{
int i,j;
for(i=0;i<rows;i++)
 for(j=0;j<2;j++)
  {
    printf("Enter element %d %d: ",i+1,j+1);
    scanf("%d",&pay[i][j]);
   }
}

int main(void)
{
int i;
for(i=0;i<rows;i++)
 scanf("%d",&id[i]);
input();
populate();
print();
printf("eId? ");
scanf("%d",&eId);
printf("Range? ");
scanf("%d",&range);
int c=check();
printf("\nC= %d",c);
}   




