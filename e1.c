#include<stdio.h>
#include<string.h>
int main(void)
{
printf("Enter the string: ");
char line[100];
gets(line);
int i,j;
int x=strlen(line);
char s[x+1];
for(i=0,j=0;i<x;i++)
{
 if(i==0)
 {
  if(tolower(line[0])!=line[1])
   {
    s[j]=line[0]; j++;
   }
  }
else
{
 if(line[i]!=line[i+1])
   {
   s[j]=line[i];
   j++;
   }
 }
}
s[j]='\0';
s[0]=toupper(s[0]);
printf("Result: ");
puts(s);
}
