#include<stdio.h>
#include<string.h>
int main(void)
{
char c[2][8]={"RED","BLUE"};
int i,j;
for(i=0;i<2;i++)
{
 printf("\n%d %s \n",c[i],c[i]);
 for(j=0;j<strlen(c[i]);j++)
   printf("%c ",c[i][j]);
 printf("\n");
}
} 
