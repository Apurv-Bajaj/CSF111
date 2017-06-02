#include<stdio.h>
#include<string.h>
int check(char[],char);

int main(void)
{
printf("Enter the string\n");
char str[100];
scanf("%s\n",str);
char c;
printf("Enter the char to be searched\n");
scanf("%c\n",&c);
int b;
b=check(str,c);
if(b==1)
printf("Yes!\n");
else
printf("No!\n");
}

int check(char s1[],char c1)
{
int t=strlen(s1);
printf("The length is %d\n",t);
char *c2=strchr(s1,c1);
if(c2!=' ')
return 1;
else 
return 0;
return -1;

}
