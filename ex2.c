#include<stdio.h>
#include<string.h>
int cmp(char s1[],char w[])
{
if(strlen(s1)!=strlen(w)) return -1;
int x=strlen(w);
int i;
for(i=0;i<x;i++)
 if(s1[i]!=w[i])
  return -1;
return 0;
}


int main(void)
{
printf("Enter the string: ");
char line[100];
gets(line);
printf("Enter the word: ");
char word[20];
gets(word);
int i,j;
int c=0;int x=-1;
for(i=0;i<strlen(line)+1;i++)
{
char s1[20];
if(line[i]==' ' || line[i]=='\0') 
{
 for(j=0;j<i-x-1;j++)
  s1[j]=line[j+x+1];
  s1[j]='\0';
  printf(" %s ",s1);
 if(cmp(s1,word)==0)
   c++;
  x=i;
}
}
printf(" %d ",c);
}

