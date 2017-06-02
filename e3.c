#include<stdio.h>
#include<string.h>
int main(void)
{
printf("Number? ");
int n;
scanf("%d",&n);

int i,j,k;
char line[n][100];
gets(line[0]); //ainvai hi use krna pad rha hai
for(i=0;i<n;i++)
{
printf("Enter line %d: ",i+1);
gets(line[i]);
}
printf("Enter the word: ");
char word[20];
gets(word);

for(k=0;k<n;k++)
{
int c=0;int x=-1;
for(i=0;i<strlen(line[k])+1;i++)
{
char s1[20];
if(line[k][i]==' ' || line[k][i]=='\0') 
{
 for(j=0;j<i-x-1;j++)
  s1[j]=line[k][j+x+1];
  s1[j]='\0';
  
 if(strcmp(s1,word)==0)
   c++;
   x=i;
}
}
if(c!=0)
 puts(line[k]);
}
}
