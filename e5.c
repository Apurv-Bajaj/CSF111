#include<stdio.h>
#include<string.h>
int main(void)
{
printf("Enter the sentence: ");
char line[100];
gets(line);
int i,c=1;
for(i=0;i<strlen(line);i++)
{ if(line[i]==' ')
   c++;
}
//printf("%d ",c);
char s[c][100];
int j=0,k;
for(i=0;i<c;i++)
{
 for(k=0;line[j]!=' ' && j<strlen(line);j++,k++)
   s[i][k]=line[j];
   j++;
   s[i][k]='\0';
}
for(i=c-1;i>=0;i--)
 printf("%s ",s[i]);
}
