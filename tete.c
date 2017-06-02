#include<stdio.h>
#include<string.h>
/*void som(int i)
{
if(i<0)
 printf("%d",i);
else
{
 som(--i);
 printf("%d",i);
}
}*/
int* call_me()
{
int* temp;
temp=(int*)malloc(5*sizeof(int));
int i;
for(i=0;i<5;i++)
 temp[i]=i+2;
return temp;
}
int main(void)
{
/*int *arr;
arr=call_me();
int i;
for(i=0;i<5;i++)
 printf("%d",arr[i]);
*/
char s[100];
int ln;
puts("Enter String");
gets(s);
ln=strlen(s);
printf("%d",ln);
}

