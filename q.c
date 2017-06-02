#include<stdio.h>
int main(void)
{
char j=1;
int i=-1;
while(j<=255)
{
printf("%c %d\n",j,j);
j++;
i++;
}
printf("%d ",i);
}

