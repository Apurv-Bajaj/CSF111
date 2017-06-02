#include<stdio.h>
#include<string.h>
#include<ctype.h>
void create(int i,int x,char line[],char sub[])
{
int j;
for(j=0;j<x;j++,i++)
{
 sub[j]=line[i];
 }
sub[j]='\0';
}

void replace(int i,char w[],char line[],char l[])
{
int j,k;
for(j=0;j<i;j++)
l[j]=line[j];
for(k=0;k<strlen(w);j++,k++)
l[j]=w[k];
for(;j<strlen(line);j++)
l[j]=line[j];
l[j]='\0';
}



int main(void)
{
char line[100];
printf("Enter the string: ");
gets(line);
char word[100];
printf("Enter the word to be replaced: ");
gets(word);
printf("Replacement word: ");
char w[100];
gets(w);
int i,j,x=strlen(word);
char l[100];
char sub[x+1];
for(i=0;i<strlen(line)-x+1;i++)
{
create(i,x,line,sub); //Create a string of x length from line starting from index i
if(strcmp(sub,word)==0)
{
replace(i,w,line,l);
}
}  
puts(l);
}









