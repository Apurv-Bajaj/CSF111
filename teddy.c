#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
printf("Enter x");
int x;
scanf("%d",&x);
char c; scanf("%c",&c);
int i;char** s=(char**)malloc(x*sizeof(char*));
for(i=0;i<x;i++)
{ 
 s[i]=(char*)malloc(100*sizeof(char));
 printf("Enter details! ");
 gets(s[i]);
}
}








