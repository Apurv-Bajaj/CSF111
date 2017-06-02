#include<stdio.h>

int main(void)
{
printf("This program will print an auto-filled array in spiral fashion.\nEnter rows and columns: ");
int r,c;
scanf("%d %d",&r,&c);
int a[r][c];
int i,j,k=1;
for(i=0;i<r;i++)
 for(j=0,;j<c;j++,k++)
  a[i][j]=k;




